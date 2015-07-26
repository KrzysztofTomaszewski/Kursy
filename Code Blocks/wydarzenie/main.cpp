#include <iostream>
#include "event.h"

using namespace std;

int main()
{
    Event w1("Apokalipsa zombie", 6, 8, 2045, 8, 15);
    //tu nastapi wywolanie, z nawiasem trzeba
    //podac wartosci a bez dostanie wartosci domyslne
    w1.show();

    return 0

}
