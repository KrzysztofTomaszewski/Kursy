#include <iostream>

using namespace std;

float metry;





float ile_cali(float m);

float ile_jardow(float j);  //taka implementacja funkcji a funkcja jest pod main

void ile_mil(float m)
{
    cout << "Mil: " << m*0.0006213;
}

int main()
{
    cout << "Podaj ile metrow: ";
    cin >> metry;

    cout << "Cali: " << ile_cali(metry) << endl;
    cout << "Jardow: " << ile_jardow(metry) << endl;
    ile_mil(metry);
    return 0;
}
float ile_cali(float m)
{
    return m*39.37;
}

float ile_jardow(float j)
{
    return j*1.0936;
}
