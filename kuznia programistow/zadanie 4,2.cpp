#include <iostream>
using namespace std;

int liczba;
int suma = 0;

int main()
{
	cout << "Podaj liczbe naturalna z zakresu 1 do 1000\n";
	cin >> liczba;
	
	if((liczba < 0) || (liczba >1000))
	{
		cout << "0";
	}
	else
	{
		for(int i = 1;i <= liczba; i++)
		{
			suma += i;
		}
		cout << "Dla liczby " << liczba << " jest to liczba: " << suma << endl; 
	}
	return 0;
}
