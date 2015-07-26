#include <iostream>
#include <cmath>

using namespace std;

int x=31, r, d, o1, o2;


int main()
{
    cout<<"(1947-2014) Ile razy LA Lakers wystapili w finale NBA" << endl;
    cout<<"Rick: ";
    cin>>r;
    cout<<"Daryl: ";
    cin>>d;

    o1=abs(x-r);
    o2=abs(x-d);

    if(o1<o2) cout<<"Wygral Rick";
    else if(o1>o2) cout<<"Wygral Daryl";
    else cout<<"Remis!";

    return 0;
}
