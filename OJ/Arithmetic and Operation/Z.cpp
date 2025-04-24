#include <stdio.h>

int main ()
{
	double a, b, c, d; 	
	int T; 
	scanf("%d", &T); 

	for(int i=0; i<T; i++)
	{
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d); 
		printf("%0.2lf\n", 2*(a/1 + 2*(b/2)+ 2*(c/3)+d/4)); 
	}	
	return 0; 
}
