#include <stdio.h>

int main ()
{
	int T; 
	double P, N; 
	
	scanf("%d", &T); 
	for(int i=0; i<T; i++)
	{
		scanf("%lf %lf", &P, &N); 
		printf("%0.2lf\n", (N*P)/100); 
	}
	return 0; 
}
