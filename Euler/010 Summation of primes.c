#include <stdio.h>
#include <math.h>

int is_prime(int num) // 반환값이 1이면 소수
{
	int i; int cnt = 1;
	for(i=2 ; i <= sqrt(num) ; ++i)
	{
		if(num%i == 0)
		{
			cnt--;
			break;
		}
	}
	return cnt;
}

int main()
{
	int i, n;
	unsigned long long int sum = 0;
	
	scanf("%d",&n);
	
	for(i=2 ; ; ++i)
	{
		if(is_prime(i)) // i가 소수면 
		{
			if(i < n)
			{
				sum += i;
			}
			else break;
		}
	}
	printf("%lld",sum);
}
