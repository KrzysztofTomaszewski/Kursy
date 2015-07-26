#include <iostream>
using namespace std;

int x = 1;
int y = 1;
int z = 1;

int main()
{
	for(x; x <= 10; x++)
	{
		for(y; y <= 10*x; y++)
		{
			cout << y << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
