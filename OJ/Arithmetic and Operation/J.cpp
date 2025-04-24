#include <stdio.h>

int main ()
{
	double A, B; 
	scanf("%lf %lf", &A, &B); 
	
	printf("%0.4lf", B/A * 100); 
	printf("%%\n"); 
	return 0; 
}
