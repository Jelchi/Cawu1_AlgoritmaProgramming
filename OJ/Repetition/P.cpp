#include <stdio.h>

int main ()
{
	long long int T, K; 
	scanf("%lld", &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%lld", &K); 
		
		int jump = 0; 
		int position = 0; 
		
		while(position < K)
		{
			jump++; 
			position += jump;
		}
		printf("Case #%d: %d\n", i, jump); 
	}
	return 0; 
}
