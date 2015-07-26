#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    /*
    string napis = "Ala ma kota";
    string nowynapis = napis.substr(4,7);

    cout <<napis << endl;
    cout <<nowynapis;
    */

    /*  zastapienie jakiegos wyrazu innym-----------
    string napis = "Ala ma kota";
    napis.replace(4,2,"nie ma");

     cout <<napis;
     */

    /*  dodawanie napisow do stringow-------------
    string napis = "Ala ma kota";
    napis.insert(11," filemona");

     cout <<napis;
     */

    /*  usowanie czegos z napisu-------------------
    string napis = "Ala ma kota";
    napis.erase(3,3);

     cout <<napis;
     */

    /*  szukanie czegos w napisie---------------------
    string napis = "Ala ma kota";
    string szukaj = "kot";

    size_t pozycja = napis.find(szukaj);

    if(pozycja != string::npos)
        cout << "Znaleziono na pozycji: " << pozycja;
    else
        cout << "Nie znaleziono";
    */
    return 0;
}
