#include <stdio.h>

int check_mul(unsigned long long int num, int n) // 1부터 n까지 나눴을 때 공배수인지 반환. 
{
	int i;
	int swch = 1; // 1일때 참 
	for(i=1 ; i<=n ; ++i)
	{
		if(num%i != 0)
		{
			swch--;
			break;
		}
	}
	return swch;
}

unsigned long long int func(unsigned long long int num, int n, int max_n)
{
	int i;
	unsigned long long int min = num*n;
	
	for(i=1 ; i<=n ; ++i)
	{
		if(check_mul(num*n/i, n)) // num*n/i 가 1부터 n까지의 공배수일 때. 
		{
			if(min > num*n/i) min = num*n/i; // 그게 min보다 작을 때, 그걸 min으로.
		}
	}
	if(max_n == n) return min;
	else return func(min, n+1, max_n);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("\n1부터 %d 까지의 최소공배수 : %lld", n, func(1,1,n));
}
