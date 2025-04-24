#include <stdio.h>

int main ()
{
	int T; 
	long long int N; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%lld", &N); 
		int length = 0; 
		
		while(N !=0)
		{
			N/=10; 
			length++; 
		 } 
		 printf("Case #%d: %d\n", i, length); 
	}
	return 0; 
}
