#include <stdio.h>

int main ()
{
	double n; 
	double p; 
	
	for(int i=0; i<4; i++)
	{
		scanf("%lf %lf", &n, &p); 
		printf("$%0.2lf\n", p * 100 / (100-n)); 
	}
	return 0; 
}
