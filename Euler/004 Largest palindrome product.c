#include <stdio.h>

int p10(int n)
{
	int i;
	int a = 10;
	int ini_a = a;
	if(n != 0)
	{
		for(i=1 ; i<n ; ++i)
		{
			a = ini_a * a;
		}
		return a;
	}
	else return 1;
}

int siz(int a) // size
{
	int i;
	for(i=0 ; ; ++i)
	{
		if(a/p10(i) == 0) break;
	}
	return i;
}

int find_what(int a, int where)
{
	return (a%p10(where) - a%p10(where-1))/p10(where-1) ; 
}

int is_pel(int a) // 0 : is pel ,  1 : not pel
{
	int i;
	int none = 0;
	
	for(i = 1 ; i <= siz(a)/2 ; i++)
	{
		if(find_what(a, i) != find_what(a, siz(a)-i+1))
		{
			none++;
			break;
		}
	}
	
	return none;
}


int main()
{
	int i, j;
	int max = 0;
	for(i=100 ; i<1000 ; ++i)
	{
		for(j=100 ; j<1000 ; ++j)
		{
			if(is_pel(i*j) == 0)
			{
				printf("%4d * %4d = %8d : ", i, j, i*j);
				printf("is pel\n");
				if(max < i*j) max = i*j;
			}
		}
	}
	printf("\n\n%d",max);
}
