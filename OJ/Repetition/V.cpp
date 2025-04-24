#include <stdio.h>

int main()
{
	int T, N; 
	scanf("%d", &T); 
	for(int i=1; i<=T; i++)
	{
		scanf("%d", &N); 
		for(int m=1; m<=N; m++)
		{
			for(int n=1; n<=N; n++)
			{
				//n is equal to N-m+1 means that the current position is on the diagonal line that goes from the top right corner to the bottom left corner of the square. 
				//For example, if N is 5, then n is equal to N-m+1 when m and n are (1, 5), (2, 4), (3, 3), (4, 2), or (5, 1). 
				//These are the positions where a star should be printed on the diagonal line.
				if(m==1 || m==N || n==m || n==N-m+1 || n==1 || n==N)
				{
					printf("*");
				}
				else 
				{
					printf(" "); 
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0; 
}
