#include <stdio.h>

unsigned long long int find_factor(unsigned long long int n, unsigned long long int last_i)
{
	unsigned long long int i;
	for(i=last_i; ;++i) // 가장 처음으로 나눠질 때의 i가 무엇인지만 알면 되니까 가운데 항 비워둠.
	{
		if(n % i == 0)
		{
			if(n == i)
			{
				return i;
			}
			else
			{
				printf("%d", i);
				printf(" * ");
				return find_factor(n/i, i); // ←결과 같음→ // sf(n/i, i); break;
			}
		}
	}
}

int main() // 수를 입력하면 소인수(prime factor)분해된 결과 나옴.
{
	unsigned long long int n;
	scanf("%lld",&n);
	printf("= ");
	if(n == 1) printf(1); // n이 1인 경우 예외처리
	else printf("%lld",find_factor(n,2)); // 가장 나중에 반환되는 값 : 가장 큰 소인수
}
