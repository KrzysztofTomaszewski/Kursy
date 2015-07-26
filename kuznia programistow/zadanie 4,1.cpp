#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <=15; i++)
	{
		cout << "*";
	}
	cout << endl;
	int suma = 0;
	for(int i = 21; i <=40; i++)
	{
		suma += i;
	}
	cout << suma << endl;
	for(int i = 30; i >= 20; i--)
	{
		cout << i << " ";
	}
	return 0;
}
