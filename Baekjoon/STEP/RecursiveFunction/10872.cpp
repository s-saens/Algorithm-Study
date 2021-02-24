#include <iostream>
using namespace std;

int fact(int p)
{
	if(p > 1)
	{ 
		p *= fact(p-1);
    	return p;
	}
	else return 1;
}

int main()
{
	int number;
	cin >> number;
	cout << fact(number) << endl;
}
