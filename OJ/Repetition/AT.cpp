#include <stdio.h>

int main ()
{
	int T, X; 
	scanf("%d", &T); 
	
	for(int a=1; a<=T; a++)
	{
		scanf("%d", &X); 
		
		for(int i=1; i<=X; i++)
		{
			for(int j=1; j<=(X-i); j++)
			{
				printf(" "); 
			}	
				
			for(int k=1; k<=(2*i)-1; k++)
			{
				printf("*"); 
			}
			printf("\n"); 	
		}	
	}
	return 0; 
}
