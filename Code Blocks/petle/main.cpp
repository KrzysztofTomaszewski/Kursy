#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int populacja = 1;
int godzin = 0;

int main()
{
    do
    {
        godzin++;
        populacja = populacja*2;

        cout << "Minelo godzin: " << godzin
        << " Liczba bakterii: " << populacja << endl;
    }
    while(populacja <= 1000000000);
    return 0;
}
