#include <stdio.h>

int main ()
{
	int T; 
	int N; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d", &N); 
		int a[N]; 
		int b[N]; 
		for(int j=0; j<N; j++)
		{
			scanf("%d", &a[j]); 
		}
		for(int j=0; j<N; j++)
		{
			scanf("%d", &b[j]); 
		}
		printf("Case #%d:", i); 
		
		int result = 0; 
		for(int k=0; k<N; k++)
		{
			result= a[k]-b[k]; 
			printf(" %d", result); 
		}
		printf("\n"); 
	}
	return 0; 
}
