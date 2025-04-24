#include<stdio.h>

int main ()
{
	int T; 
	double a, b; 
	
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		scanf("%lf %lf", &a, &b); 
		printf("%0.2lf\n",(a*b)/360); 
	}
	return 0; 
}
