#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;
double czas;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin >> ile;

    int *tablica;       //wskaznik int poprzedzony *
    tablica = new int [ile];    //ilosc intow w tablicy nowa zarezerwowa pamiec od momentu gdzie jest wskaznik
                                // tablica - wskazuje na adres w pamieci RAM zmiennej na ktora wskazuje
                                // *tablica - wskazuje na wartosc zmiennej na jaka wskazuje
    start = clock();        //mierzenie czasu pracy procesora
    for(int i = 0; i < ile; i++)
    {
        tablica[i] = i;
        tablica[i] +=50;
    }
    stop = clock();
    czas = (double)(stop - start)/CLOCKS_PER_SEC;   //przelicza prace procesora na sekundy

    cout << "Czas zapisu bez wskaznika: " << czas << endl;

    delete [] tablica;   // usowa stworzona tablice by wyczyscic pamiec

    int *wskaznik = tablica;
    tablica = new int [ile];

    start = clock();

    for(int i = 0; i < ile; i++)
    {
        *wskaznik = i;  // *wskaznik wskazuje na wartosc wskazywanej zmiennej, ustawia ja jako i
        *wskaznik +=50; // tu dodaje 50 do wartosci
        wskaznik++;     // tu wskaznik bez gwiazdki czyli zmienia w tym przypadku szufladke tablicy o 1

    }

    stop = clock();
    czas = (double)(stop - start)/CLOCKS_PER_SEC;   //przelicza prace procesora na sekundy

    cout << "Czas zapisu ze wskaznikiem: " << czas << endl;

    delete [] tablica;

    return 0;
}
