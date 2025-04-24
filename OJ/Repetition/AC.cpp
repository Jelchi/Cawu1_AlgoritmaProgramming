#include <stdio.h>

int main ()
{
	int T; 
	scanf("%d", &T); 
	
	for (int i=1; i<=T; i++)
	{
		long long int N, M; 
		scanf("%lld %lld", &N, &M); 
		
		int hargaPermen[10001]; 
		long long int Min; 
		scanf("%lld", &Min); 
		
		for(int j=1; j<N; j++)
		{
			scanf("%d", &hargaPermen[j]); 
			if(hargaPermen[j] < Min)
			{
				Min = hargaPermen[j]; 
			}
		}
		printf("Case #%d: %lld\n", i,M/Min); 		
	}
	return 0; 
}
