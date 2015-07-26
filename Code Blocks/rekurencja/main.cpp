#include <iostream>

using namespace std;
//rekurencja to punkcja wywolujaca sama siebie by zwrocic wartosc podstawowa

int f(int n)
{
    if(n==0) return 3;  //wartosc podstawowa
    else return f(n-1)+2;   //wywolanie swojej kopi
}

long int potega(int p, int w)
{
    if(w==0) return 1;
    else return p*potega(p,w-1);
}

long int fib(int n)
{
    if(n==1|| n==2) return 1;
    else return fib(n-1)+fib(n-2);
}
long int silnia(int s)
{
    if(s==0) return 1;
    else return s*silnia(s-1);
}

int main()
{
    cout << f(3) << endl;
    cout << potega(3,4)<<endl;
    cout << fib(6)<<endl;
    cout << silnia(6)<<endl;
    return 0;
}
