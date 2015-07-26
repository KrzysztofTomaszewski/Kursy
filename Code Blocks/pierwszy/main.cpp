#include <iostream>

using namespace std;

int uczniowie, cukierki, x ,y;

int main()
{
    cout << "Ile uczniow w klasie: ";
    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama: ";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);
    cout << "Cukierkow dla kazdego ucznia: " << x << endl;

    y = cukierki - x*(uczniowie-1);
    cout << "Dla Jasia na wieczor zostalo: " << y << " cukierkow."<< endl;

    return 0;
}
