#include <iostream>
#include <string>

using namespace std;

int cnt369(int num)
{
	int thatN;
	int cnt = 0;
	
	for(int i=1 ; i<=num ; i*=10)
	{
		thatN = num/i - (num/(i*10))*10;
		if(thatN == 3 || thatN == 6 || thatN == 9) cnt++;
	}
	
	return cnt;
}

int main()
{
	int N, cnt;
	cnt = 0;
	cin >> N;
	
	for(int i=1 ; i<=N ; ++i)
	{
		cnt += cnt369(i);
	}
	
	cout << cnt;
}
