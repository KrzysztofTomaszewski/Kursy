#include <iostream>
using namespace std;

int main()
{
	int numer;
	int suma;
	
	cout << "Podaj liczby do podsumowania: \n";
	while(numer > 0)
	{
		cin >> numer;
		suma += numer;
	}
	cout << "Suma liczb to: " << suma;
	return 0;
}
