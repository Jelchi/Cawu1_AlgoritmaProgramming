#include <stdio.h>

int main ()
{
	int T, N; 
	scanf("%d", &T);
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d", &N); 
		printf("Case #%d:\n", i); 
		
		if(N %2 ==0)
		{
			for(int m=0; m<N; m++)
			{
				for(int n=0; n<(N-m)-1; n++)
				{
					printf(" ");
				}
			
				for(int k = 0; k<=m; k++)
				{
					if(k %2 != 0)
					{
						printf("*");
					}
					else 
					{
						printf("#");
					}
				}
				printf("\n");
			}
		}
		else
		
		for(int m=0; m<N; m++)
		{
			for(int n=0; n<(N-m)-1; n++)
			{
				printf(" ");
			}
			
			for(int k = 0; k<=m; k++)
			{
			
				if(k %2 == 0)
				{
					printf("*");
				}
				else 
				{
					printf("#");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
