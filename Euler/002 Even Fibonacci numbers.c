#include <stdio.h>

int main()
{
	int num[2] = {1,2}; // initial num[0] = 1 num[1] = 2
	int sum = 0;
	int cnt = 0;
	int i, temp;
	while(num[1] <= 4000000) //when num[1]'s value exceeds 4 million, num[0] would be the last value.
	{
		temp = num[0];
		num[0] = num[1];
		num[1] += temp;
		if(num[0]%2 == 0) sum += num[0];
	}
	printf("%d",sum);
}
