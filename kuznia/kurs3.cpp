    #include <iostream>
    using namespace std;

    int main()
    {
        int stanKonta = 2500;   // stan naszego konta; gdy zaczynamy korzystac z bankomatu mamy 2500 zl
        int kwota;              // kwota, która bedziemy wyplacac z bankomatu

        // na poczatku programu informujemy uzytkownika ile ma kasy
        cout << "Stan twojego konta: "      // ten cout jest zapisany w dwoch liniach zamiast jednej
            << stanKonta << endl << endl;   // zauwaz, ze srednik jest tylko na koncu drugiej linii

        while( stanKonta > 0 ) // warunek wykonania -> musimy miec PLN na koncie, aby wyplacic
        {
            cout << "Podaj kwote" << endl;
            cin >> kwota; // uzytkownik wpisuje kwote; zwróc uwage, ze strzalki sa w druga strone niz przy cout
            
            if (( kwota <= stanKonta) && (kwota > 0)) // czy uzytkownik ma na koncie tyle pieniedzy, ile chce wyplacic?
            {
                stanKonta = stanKonta - kwota; // to samo mozna zapisac jako: stanKonta -= kwota;
                cout << "Wyplaciles pieniadze. Stan twojego konta po tej operacji: "
                    << stanKonta << endl << endl;
            }
            else if(kwota > 2500)
            {
            	cout << "Nie masz tyle Kasy! Masz: "
                << stanKonta << endl << endl;
			}
            else    // chcesz wyplacic wiecej niz masz pieniedzy na koncie
            {
                break;
            }
        }

        cout << "Dziekujemy za korzystanie z naszego bankomatu.\n";
        return 0;
    }    
