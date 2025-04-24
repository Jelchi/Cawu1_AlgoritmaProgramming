#include <stdio.h>

int main ()
{
	long long int N, P, xi, count=0; 
	
	scanf("%lld %lld", &N, &P); 
	for(int i=1; i<=N; i++)
	{
		scanf("%lld", &xi); 

		if(P>xi)
		{
			count++; 
		}
	}
	printf("%lld\n", count); 
	return 0; 
}
