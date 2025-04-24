#include <stdio.h>

int main ()
{
	double a, b, c, d; 
	
	for(int i=0; i<3; i++)
	{
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d); 
		printf("%0.2lf\n", (a/1)+(b/2)+(c/3)+(d/4)+(b/2)+(c/3)+(d/4)+(c/3)+(c/3)+(d/4)+(c/3)+(b/2)+(d/4)+(c/3)+(b/2)+(a/1));		 
	}
	return 0; 
}
