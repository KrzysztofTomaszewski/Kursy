#include <iostream>
using namespace std;

int main()
{
	cout << "Odgadnij liczbe z zakresu od 1 do 100.\n";
	int liczba;
	int iloscProb;
	while(iloscProb <= 11)
	{
		cin >> liczba;
		iloscProb++;
		
		if(liczba > 42)
		{
			cout << "Liczba " << liczba << " to za duzo.\n";
		}
		else if(liczba < 42)
		{
			cout << "Liczba " << liczba << " to za malo.\n";
		}
		else if(liczba == 42)
		{
			cout << "Brawo! Wygrales po " << iloscProb << " probach!\n";
			break;
		}
		if(iloscProb == 10)
		{
			cout << "Niestety, nie zgadles po 10 probach, przegrywasz.\n";
			break;
		}
	}
	return 0;
}
