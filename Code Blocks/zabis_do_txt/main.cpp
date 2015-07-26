#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: ";
    cin >> imie;

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;

    cout << "Podaj numer telefonu: ";
    cin >> nr_tel;

    fstream plik;
    plik.open("wizytowka.txt",ios::out | ios::app);  //otwarcie polaczenia i wlaczenie opcji zapisu (out)
                                //app - dodaje informacje na koncu pliku nie zamieniajac go

    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_tel << endl;

    plik.close();   //zamkniecie polaczenia z plikiem

    return 0;
}
