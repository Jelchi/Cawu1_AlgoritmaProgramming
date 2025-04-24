#include <stdio.h>

int main ()
{
	long long int T, A, B ,C; 
	scanf("%lld", &T);
	
	for(int i=1; i<=T; i++)
	{
		scanf("%lld %lld %lld", &A, &B, &C); 
		printf("Case #%lld: ", i);
		int x = A*B/100; 
		
		if(x < C)
		{
			printf("%lld\n", x); 
		}
		else 
		{
			printf("%lld\n", C); 
		}
	} 
	return 0; 
}
