#include <stdio.h>

int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y); 
	
	printf("%0.2lf", x/y * 100); 
	printf("%%\n"); 
	
	return 0; 
}
