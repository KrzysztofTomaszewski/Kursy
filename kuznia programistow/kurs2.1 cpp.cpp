#include <iostream>
using namespace std;

int main()
{
	int year;
	
	cout << "Podaj rok";
	cin >> year;
	
	if(year == 2014)
	{
		cout << "Rok 2014 jest obecnie" << endl;
	}
	else if(year > 2014)
	{
		int yearLeft = year - 2014;
		cout << "Rok " << year << "nastapi za " << yearLeft << " lat" << endl;
	}
	else if((year < 2014) && (year > 0))
	{
		int yearWas = 2014 - year;
		cout << "Rok " << year << " byl " << yearWas << " lat temu" << endl;
	}
	else if(year == 0)
	{
		cout << "Wprowadzone dane sa nieprawidlowe" << endl;
	}
	else
	{
		int yearPne = -year;
		int yearWas = year - 2014;
		cout << "Rok " << yearPne << " p.n.e. byl " << -yearWas << " lat temu" << endl;
	}
	return 0;
}
