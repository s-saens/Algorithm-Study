#include <stdio.h>

int main()
{
	int i, n;
	scanf("%d",&n);
	
	int s_of_p = 0;
	int p_of_s = 0;
	
	for(i=1 ; i<=n ; ++i)
	{
		s_of_p += i*i	;
		p_of_s += i		;
	}
	
	p_of_s = p_of_s * p_of_s;
	
	printf("%d", p_of_s - s_of_p);
}
