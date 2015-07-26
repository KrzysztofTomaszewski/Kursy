#include <iostream>
using namespace std;

int main()
{
    int stanKonta = 2500;
    int kwota;
    
    cout << "Stan twojego konta: " << stanKonta << endl << endl;

        while( stanKonta > 0 )
        {
            cout << "Podaj kwote" << endl;
			cin >> kwota;
            
            if (( kwota <= stanKonta) && (kwota >0))
            {
                stanKonta = stanKonta - kwota;
                cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji wynosi: " 
				<< stanKonta << endl << endl;
            }
            else if(kwota < 0)
            {
            	cout << "Kwota musi byc dodatnia.\n\n";
				continue; 
			}
			else if(kwota == 0)
			{
				break;
			}
            else
            {
                cout << "Nie masz wystarczajacych srodkow na koncie. Stan twojego konta wynosi: "
                << stanKonta << endl << endl;
            }
        }

        cout << "Dziekujemy za korzystanie z naszego bankomatu.\n";
        return 0;
    }    

