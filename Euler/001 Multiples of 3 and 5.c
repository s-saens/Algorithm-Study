#include <stdio.h>

int main()
{
	int i, num1, num2, sum;
	sum = 0;
	
	scanf("%d %d", &num1, &num2);
	
	for(i=1 ; i<1000 ; i++)
	{
		if(i%num1 == 0 || i%num2 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
}
