#include <stdio.h>

int main()
{
	int T, N;
	long long int ai; 
	
	scanf("%d", &T); 
	for(int i=1; i<=T; i++)
	{
		long long int count = 0;
		scanf("%d", &N);
		for(int j=1; j<=N; j++)
		{
			scanf("%lld", &ai); 
			count +=ai; 
		}
		printf("Case #%d: %lld\n", i, count); 
	}

	return 0; 
}
