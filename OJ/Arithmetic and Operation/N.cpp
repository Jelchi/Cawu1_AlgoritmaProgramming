#include <stdio.h>

int main ()
{
	double a; 
	double b; 
	scanf("%lf %lf", &a, &b); 
	
	double disc = (a - b)/ a * 100; 
	printf("%0.2lf", disc); 
	printf("%%\n"); 
	
	return 0; 
}
