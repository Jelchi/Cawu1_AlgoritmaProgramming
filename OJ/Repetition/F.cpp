#include <stdio.h>

int main ()
{
	int N, K; 
	scanf("%d %d", &N, &K); 
	
	//persegi 1  
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			printf("#"); 
		}
		printf("\n"); 
	}
	printf("\n"); 
	
	//persegi 2 
	for(int i = 0; i<N; i++)
	{
		for(int j = 0; j<N; j++)
		{
			if((i+1) % K == 0)
			{
				printf("#");
			}
			else 
			{
				printf("."); 
			}
		}
		printf("\n"); 
	}
	printf("\n"); 
	
	//persegi 3 
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if ((j+1) % K == 0)
			{
				printf("#"); 
			}
			else 
			{
				printf("."); 
			}
		}
		printf("\n"); 
	}

	return 0; 
}
