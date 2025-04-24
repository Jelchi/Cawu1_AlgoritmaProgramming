#include<stdio.h>

int main ()
{
	long long int T, K, N, M; 
	scanf("%lld", &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%lld %lld %lld", &K, &N, &M); 
		printf("Case #%lld: ", i); 
		if (N + M >= K)
		{
			printf("yes\n"); 
		}
		else 
		{
			printf("no\n"); 
		}
	}
	return 0; 
 } 
