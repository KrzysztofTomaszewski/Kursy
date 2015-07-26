#include <iostream>

using namespace std;

class Samochod
{
    public:
    string marka;
    string model;
    int rocznik;
    int przebieg;

    void wczytaj()
    {
        cout<<"DODAWANIE SAMOCHODU DO BAZY DANYCH:"<<endl;
        cout<<"Podaj marke samochodu: ";
        cin>>marka;
        cout<<"Podaj model samochodu: ";
        cin>>model;
        cout<<"Podaj rok samochodu: ";
        cin>>rocznik;
        cout<<"Podaj przebieg samochodu: ";
        cin>>przebieg;
    }
    void wypisz()
    {
        cout<<"------------"<<endl;
        cout<<"Marka: "<<marka<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Rocznik: "<<rocznik<<endl;
        cout<<"przebieg: "<<przebieg<<endl;
        cout<<"------------"<<endl;
    }


};

int main()
{
    Samochod s1;
    s1.wczytaj();
    Samochod s2;
    s2.wczytaj();

    s1.wypisz();
    s2.wypisz();




    return 0;
}
