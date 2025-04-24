#include <stdio.h>

int main ()
{
	int T; //test case 
	int X; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d", &X); 
		int arr[X][X]; 
		
		for(int m=0; m<X; m++)
		{
			for(int n=0; n<X; n++)
			{
				scanf("%d", &arr[m][n]); 
			}
		}
		printf("Case #%d:", i); 
		for(int a=0; a<X; a++)
		{
			int total = 0; 
			for(int b=0; b<X; b++)
			{
				total +=arr[b][a]; 
			}
			printf(" %d", total);
		}
		printf("\n"); 
	}
	return 0; 
}
