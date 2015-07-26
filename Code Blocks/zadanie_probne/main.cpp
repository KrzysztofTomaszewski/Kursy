#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool tablica[n + 1];

    for (int i = 2;i <= n; i++ ) // przeszukuj liczby od 2 do sqrt(n), 0 i 1 nie s� liczbami pierwszymi
    {
        if (tablica[i] == true) // je�eli dana liczba jest ju� wykre�lona
            continue; // to przejd� do kolejnej
        for (int j = 2*i ; j <= n; j += i) // przejd� od liczby 2*i do n przesuwaj�c si� o i
            tablica[j] = true; // i ka�d� z nich usuwaj ze zbioru
    }

    cout << "Liczby pierwsze z przedzia�u od 2 do " << n << ":" << endl;

    for (int i = 2; i <= n; i++) // przeszukaj liczby od 2 do n
        if (tablica[i] == false) // je�li liczba nie zosta�a usuni�ta ze zbioru
            cout << i << endl; // to j� wypisz
    return 0;
}
