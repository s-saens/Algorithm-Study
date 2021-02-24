#include <iostream>

using namespace std;

int main()
{
	int cnt = 0 ; int max_cnt = 0;
	unsigned long long int n, that_n;
	
	for(int i=1 ; i<1000*1000; ++i)
	{
		cnt = 1;
		n = i;
		while(n > 1)
		{
			if(n%2 == 0) n /= 2; // even n/2
			else n = (3*n) + 1; // odd 3n+1
			cnt++;
		}
		
		if(n == 1 && max_cnt < cnt)
		{
			cout << cnt << ", " << i << endl;
			max_cnt = cnt;
			that_n = i;
		}
	}
	
	cout << endl << that_n << endl;
}
