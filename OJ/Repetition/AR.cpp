#include <stdio.h>

int main ()
{
	int M, N; 
	scanf("%d %d", &M, &N); 
	
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{	
			for(int l=0; l<(M-i)-1; l++) //hadap kekiri 
			{
				printf("");
			}	
			
			for(int p=0; p<(N-j)-1; p++)//hadap ke kiri 
			{
				printf(" "); 
			}
					
			for(int k=0; k<(j+1); k++)
			{
				printf("*"); 
			}
			printf("\n"); 
		}
	}
	return 0; 
}
