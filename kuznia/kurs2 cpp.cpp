#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Podaj rok: ";
	cin >> year;

	if (year < 0)
	{
		cout << "Rok, ktory podales to " << -year << " p.n.e." << endl;
	}

	else	  // Mozna tez zapisac: if (year >= 0)
	{
		cout << "Rok, ktory podales to " << year << endl;
	}

    return 0;
}
