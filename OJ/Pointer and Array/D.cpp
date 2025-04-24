#include <stdio.h>

int main ()
{
	int X; 
	int Y;
	scanf("%d %d", &X, &Y); 
	int arr[X][Y]; 
	
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
		{
			scanf("%d", &arr[i][j]); 
		}
	}
	
	int T; 
	int a,b,c; 
	scanf("%d", &T); 
	for(int m=0; m<T; m++)
	{
		scanf("%d %d %d", &a, &b, &c); 
		arr[a-1][b-1] = c; 
	}
	
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
		{
			printf("%d", arr[i][j]); 
			if(j!=Y-1)
			{
				printf(" "); 
			}
		}
		printf("\n"); 
	}
	return 0; 
 } 
