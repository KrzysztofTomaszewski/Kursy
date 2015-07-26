#include <iostream>

using namespace std;

class Ksztalt
{
public:
    virtual void oblicz_pole()=0;   //funkca czysta virtualna bez ciala dlatedo =0
};

class Kolo :public Ksztalt
{
    float r;
public:
    Kolo(float x)
    {
        r=x;
    }
    virtual void oblicz_pole()
    {
        cout<<"Pole kola: "<<3.14*r*r<<endl;
    }
};

class Kwadrat :public Ksztalt
{
    float a;
public:
    Kwadrat(float x)
    {
        a=x;
    }
    virtual void oblicz_pole()
    {
        cout<<"Pole kwadratu: "<<a*a<<endl;
    }
};

void obliczenia(Ksztalt *x)     //posylanie wskaznika polimorficznego
{
    x->oblicz_pole();
}

int main()
{
    Kolo k(1);
    Kwadrat kw(2);

    Ksztalt *wsk;   //ustawianie wskaznika polimorficznego
    wsk=&k;         //nadawanie wskaznikowi obiektu orginalnego (&)
    wsk -> oblicz_pole();   //obliczanie pola wstaznika czyli kwadratu

    wsk=&kw;
    wsk -> oblicz_pole();

    obliczenia(wsk);

    return 0;
}
