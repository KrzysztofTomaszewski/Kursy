#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    fstream plik;
    plik.open("wizytowka.txt",ios::in);  //otwarcie polaczenia i odczytanie z pliku

    if(plik.good() == false)    //sprawdza czy plik istnieje
    {
        cout << "Plik nie istnieje!";
        exit(0);
    }

    int nr_lini = 1;
    string linia;
    while(getline(plik,linia))  //sprawdza czy nowe linie istnieja
    {
        switch(nr_lini)
        {
        case 1: imie = linia; break;
        case 2: nazwisko = linia; break;
        case 3: nr_tel = atoi(linia.c_str()); break;    // atoi('i' oznacza integer) konwertuje, c_str na string
        }

        nr_lini++;
    }

    plik.close();   //zamkniecie polaczenia z plikiem

    cout << imie << endl;
    cout << nazwisko << endl;
    cout << nr_tel << endl;

    return 0;
}
