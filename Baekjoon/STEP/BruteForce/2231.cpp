#include <string>
#include <iostream>

using namespace std;

int getSize(int n)
{
	return to_string(n).length();
}

int getSum(int n)
{
	int singleNum = n;
	int sum = n;
	
	for(int i=1; i<=n ; i*=10)
	{
		singleNum = n/i - (n/(10*i))*10;
		sum += singleNum;
	}
	
	return sum;
}

int main()
{
	bool done = false;
	int N;
	cin >> N;
	
	for(int i = N - (getSize(N)*9) ; i<N ; ++i)
	{
		if(getSum(i) == N)
		{
			done = true;
			cout << i << endl;
			break;
		}
	}
	
	if(!done) cout << 0 << endl;
}
