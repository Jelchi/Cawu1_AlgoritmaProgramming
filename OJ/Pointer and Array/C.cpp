#include <stdio.h>

int main ()
{
	int N; 
	int Q; 
	scanf("%d", &N); 
	
	int c[N]; 
	for(int i=0; i<N; i++)
	{
		scanf("%d", &c[i]); 
	}
	
	scanf("%d", &Q); 
	
	int a, b; 
	for(int i=1; i<=Q; i++)
	{
		scanf("%d %d", &a, &b); 
		c[a-1] = b;
		
		printf("Case #%d:", i);
			
		for(int j=0; j<N; j++)
		{
			printf(" %d", c[j]); 
		}
		printf("\n"); 
	}
	return 0; 
}
