#include <iostream>
using namespace std;

int main()
{
	int punkty = 301;
	int punktyDoSprawdzenia;
	int punktyPoRzucie;
	int runda = 1;
	int rzut = 1;
	
	while(punkty >= 0)
	{
		cout << "Runda " << runda << ", rzut " << rzut << ": Podaj ilosc punktow: ";
		cin >> punktyPoRzucie;
		if(punktyPoRzucie == -1)
		{
			break;
		}
		else if((punktyPoRzucie < 0) || (punktyPoRzucie > 60))
		{
			cout << "Niepoprawna ilosc punktow\n";
			continue;
		}
		else
		{
			punktyDoSprawdzenia = punkty;
			punktyDoSprawdzenia -= punktyPoRzucie;
			
			if(punktyDoSprawdzenia > 0)
			{
				punkty -= punktyPoRzucie;
			}
			else if(punktyDoSprawdzenia == 0)
			{
				cout << "Gra zakonczona w rundzie " << runda;
				break; 
			}
			else
			{
				cout << "Runda " << runda << ", BUST!\n" << "Liczba twoich punktow: " << punkty << endl;
				runda++;
				rzut = 1;
				continue;
			}
			
			if(rzut == 3)
			{
				cout << "Runda " << runda << ", liczba twoich punktow: " << punkty << endl;
				runda++;
				rzut = 0;
			}
			rzut++;
		}
	}
	return 0;
}
