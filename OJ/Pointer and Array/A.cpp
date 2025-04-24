#include <stdio.h>

int main ()
{
	int N, Q; 
	int a, b; 
	scanf("%d", &N); 
	int tayangan[N]; 
	
	for(int i=1; i<=N; i++)
	{
		scanf("%d", &tayangan[i]); 
	}
	
	scanf("%d", &Q); 
	for(int i=1; i<=Q; i++)
	{
		scanf("%d %d", &a, &b); 
		int total=0; 
		
		for(int j=a; j<=b; j++)
		{
			total+=tayangan[j]; 
		}
		printf("Case #%d: %d\n", i, total); 
	}
	return 0; 
}
