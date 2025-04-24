#include <stdio.h>

int main ()
{
	int T, N, M; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d %d", &N, &M); 
		printf("Case #%d:\n", i); 
		
		for(int a=1; a<=N; a++)
		{
			for(int b=1; b<=M; b++)
			{
				if(a==1||a==N||b==1||b==M)
				{
					printf("#");
				}
				else 
				{
					printf(" "); 
				}
			}
			printf("\n"); 
		}
	}
	return 0; 
}
