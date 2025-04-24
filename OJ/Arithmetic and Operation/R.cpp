#include <stdio.h>

int main ()
{
	long long a, b, c, d; 
	
	for(int i=0; i<3; i++)
	{
		scanf("(%lld+%lld)x(%lld-%lld)\n", &a, &b, &c, &d); 
		printf("%lld", (a+b)*(c-d));
		if(i!=2) 
		{
			printf(" ");
		}
		
	}
	printf("\n");
	return 0; 
}
