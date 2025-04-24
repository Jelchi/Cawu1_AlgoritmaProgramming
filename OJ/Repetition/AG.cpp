#include <stdio.h>

int main ()
{
	int T, N; 
	
	scanf("%d", &T); 
	for(int i=1; i<=T; i++)
	{
		scanf("%d", &N); 
		printf("Case %d:", i); 
		
		for (int j=0; j<N; j++)
		{
			if(j != N) 
			{
				printf(" ");
			}
			printf("%d", (j*(j+1)/2)+ 1);  
		}
		printf("\n"); 
	}
	return 0; 
}
