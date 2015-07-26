#include <iostream>

using namespace std;

class Event
{
    private:

    int day, month, year;
    int hour, minutes;
    string name;

    public:

    Event(string="Brak", int=1, int=1, int=2015, int=12, int=0);     //konstruktor(tworzy) z wartosciami podanymi w nawiasie jako domyslne
    ~Event();                  // ~ destruktor(niszczy, czysci pamiec ze smieci)
    void load();
    void show();
};
