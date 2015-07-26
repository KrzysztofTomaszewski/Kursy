#include <iostream>

using namespace std;

    // przesylanie calej oryginalnej tablicy do funkcji obliczenie sredniej i podmiana wartosci na 999
    // znak & oddaje oryginalna wartosc danej zmiennej i zapisujemy je jako argumenty w funkcji do
    // ktorej maja byc wyslane np: float srednia(float &a, float &b, float &c)
float srednia(float *tab, int ile)
{
    float suma = 0;

    for(int i = 0; i < ile; i++)
    {
        suma += *tab;
        *tab = 999;
        tab++;
    }
    return suma / ile;
}

int main()
{
    float tablica [3];

    tablica[0] = 1.5;
    tablica[1] = 2.3;
    tablica[2] = 0.75;

    cout << "Srednia wynosi: " << srednia(tablica, 3)  << endl;;

    cout << tablica[0] << endl;
    cout << tablica[1] << endl;
    cout << tablica[2] << endl;

    return 0;
}
