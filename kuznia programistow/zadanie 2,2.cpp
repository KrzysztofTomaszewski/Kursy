#include <iostream>
using namespace std;

int main()
{
	int ileOsob;
	cout << "Na ile osob zarezerwowac stolik?" << endl;
	cin >> ileOsob;
	
	if((ileOsob == 1) || (ileOsob == 2))
	{
		cout << "2";
	}
	else if((ileOsob == 3) || (ileOsob == 4))
	{
		cout << "4";
	}
	else if((ileOsob == 5) || (ileOsob == 6))
	{
		cout << "6";
	}
	else if((ileOsob >= 7) && (ileOsob <= 10))
	{
		cout << "10";
	}
	else if((ileOsob < 1) || (ileOsob > 10))
	{
		cout << "0";
	}
	return 0;
}
/*
W restauracji "Maly chlewik" wprowadzamy system rezerwacji stolików. 
Do sprawnego dzialania calego systemu brakuje modulu, który optymalizuje 
przydzial stolików w zaleznosci od ilosci osób. "Maly chlewik" posiada 
stoliki na 2, 4, 6 i 10 osób.

Napisz program, który (za pomoca polecenia cin) pyta uzytkownika na ile 
osób chce zarezerwowac stolik. W zaleznosci od ilosci osób, program wypisze 
na ekran (za pomoca polecenia cout) tylko jedna liczbe okreslajaca jaki 
stolik powinien zostac zarezerwowany. 

Jezeli uzytkownik poda liczbe 1 lub 2: program wypisze na ekran: 2
Jezeli uzytkownik poda liczbe 3 - 4: program wypisze na ekran: 4
Jezeli uzytkownik poda liczbe 5 - 6: program wypisze na ekran: 6
Jezeli uzytkownik poda liczbe 7 - 10: program wypisze na ekran: 10
Jezeli uzytkownik poda liczbe spoza przedzialu <1..10>, program 
wypisze na ekran: 0
Ostatni warunek jest bardzo wazny dla systemu rezerwacji stolików. 
Dla kazdej nieprawidlowo wpisanej przez uzytkownika liczby program musi 
wypisac na ekran liczbe 0. */
