#include <iostream>
#include "event.h"

using namespace std;

void Event::load()
{
    cout<<"Nazwa wydarzenia: ";
    cin>>name;
    cout<<"Dzien: ";
    cin>>day;
    cout<<"Miesiac: ";
    cin>>month;
    cout<<"Rok: ";
    cin>>year;
    cout<<"Godzina: ";
    cin>>hour;
    cout<<"Minut: ";
    cin>>minutes;
}
void Event::show()
{
    cout<<endl<<name<<" "<<day<<"."<<month<<"."<<year
    <<" "<<hour<<":"<<minutes<<endl;

}
Event::Event(string n, int d, int m, int y, int h, int mins)
{
    name= n;
    day=d;
    month=m;
    year=y;
    hour=h;
    minutes=mins;
}
Event::~Event()
{
    cout<<endl<<"To ja, destruktor sie nazywam kasuje obiekty, slowa przepraszam nie uzywam"<<endl;

}
