#include <stdio.h>

int main ()
{
	long long int T, N, M; 
	scanf("%lld", &T); 
	for(int i=1; i<=T; i++)
	{
		scanf("%lld %lld", &N, &M); 
		printf("Case #%lld: ", i);
		if (N%2==0 || M%2==0)
		{
			printf("Party time!\n"); 
		}
		else 
		{
			printf("Need more frogs\n"); 
		}
	}
	return 0; 
}
