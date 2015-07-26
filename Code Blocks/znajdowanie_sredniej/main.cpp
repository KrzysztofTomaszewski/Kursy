#include <iostream>

using namespace std;

float a=1.5, b=3.14, c=7.5, d=1.25, e=3.42, s, l;

int main()
{
    cout << "Podaj 5 liczb: ";
    //cin >> a >> b >> c >> d >> e;

    s = (a+b+c+d+e)/5;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
    cout << "D: " << d << endl;
    cout << "E: " << e << endl;
    cout << "Srednia z 5 liczb to: " << s << endl;

    if(s>a) a=s-a; else a=a-s;
    if(s>b) b=s-b; else b=b-s;
    if(s>c) c=s-c; else c=c-s;
    if(s>d) d=s-d; else d=d-s;
    if(s>e) e=s-e; else e=e-s;

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
    cout << "D: " << d << endl;
    cout << "E: " << e << endl;

    l=a;
    if(l>b) l=b;
    if(l>c) l=c;
    if(l>d) l=d;
    if(l>e) l=e;

     cout << "Najblizsza sredniej to liczba: " << l << endl;

    return 0;
}
