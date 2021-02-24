#include <iostream>
#include <cmath>

using namespace std;

int DividingCount(unsigned long long int num)
{
	if(num == 1) return 1;
	
	int count = 2;

	unsigned long long int num_changed = num;
	
	// 루트씌운 값을 기준으로 왼쪽(작음)에 있는 인수(factor)와 오른쪽(큼)에 있는 인수가 일대일로 대응하므로
	// 루트씌운 값의 왼쪽에 있는 값만 고려하고 오른쪽은 무시한다. 
	for(int i=2 ; i <= (int)sqrt(num) ; ++i)
	{
		if(num%i == 0)
		{
			// 루트씌운 값과 같은 인수는 일대일로 대응되는 다른 숫자가 없으므로 count에 +1 해준다. 
			if(i*i == num) count++;
			
			// 루트씌운 값의 왼쪽에 있는 수를 고려, 하나에 2의 가중치를 두고 count에 +2 해준다. 
			else count += 2;
		}
	}
	
	return count;
}

unsigned long long int MakeTriangleNum(int index)
{
	unsigned long long int sum = 0;
	
	for(int i=0 ; i<=index ; ++i)
	{
		sum += i;
	}
	
	return sum;
}

int main()
{
	unsigned long long int TNum;
	for(int i=1 ; ; ++i)
	{
		TNum = MakeTriangleNum(i);
		
		// cout << "(" << i << ") " << TNum << " " << DividingCount(TNum) << endl; // 이거 쓰면 느려짐. 확인용
		
		if(DividingCount(TNum) > 500) break;
	}
	
	cout << endl << "The first triangle number to ha over five hundred divisors is ";
	cout << TNum << endl;
}
