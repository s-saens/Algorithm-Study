#include <stdio.h>

int is_prime(int num) // 반환값이 1이면 소수 
{
	int i; int cnt = 1;
	for(i=2 ; i < num ; ++i)
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
	int i, n; int cnt = 0;
	scanf("%d",&n);
	
	for(i=2 ; ; ++i)
	{
		if(is_prime(i)) // i가 소수면 
		{
			cnt++;
			if(cnt == n)
			{
				printf("%d", i);
				break;
			}
		}
	}
}
