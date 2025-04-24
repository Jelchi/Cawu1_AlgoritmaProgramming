#include <stdio.h>

int main ()
{
	int T; 
	double a; 
	
	scanf("%d", &T); 
	for(int i=0; i<T; i++)
	{
		scanf("%lf", &a); 
		printf("%0.2lf ", (4*a)/5);
		printf("%0.2lf ", (9*a)/5 + 32); 
		printf("%0.2lf\n", a+273);  
	}
	return 0; 
}
