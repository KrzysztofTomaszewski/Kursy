#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool tablica[n + 1];

    for (int i = 2;i <= n; i++ ) // przeszukuj liczby od 2 do sqrt(n), 0 i 1 nie s¹ liczbami pierwszymi
    {
        if (tablica[i] == true) // je¿eli dana liczba jest ju¿ wykreœlona
            continue; // to przejdŸ do kolejnej
        for (int j = 2*i ; j <= n; j += i) // przejdŸ od liczby 2*i do n przesuwaj¹c siê o i
            tablica[j] = true; // i ka¿d¹ z nich usuwaj ze zbioru
    }

    cout << "Liczby pierwsze z przedzia³u od 2 do " << n << ":" << endl;

    for (int i = 2; i <= n; i++) // przeszukaj liczby od 2 do n
        if (tablica[i] == false) // jeœli liczba nie zosta³a usuniêta ze zbioru
            cout << i << endl; // to j¹ wypisz
    return 0;
}
