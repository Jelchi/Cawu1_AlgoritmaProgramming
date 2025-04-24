#include <stdio.h>

int main ()
{
	int N; 
	scanf("%d", &N); 
	int a[N], b[N],result[N]; 
	
	for(int i=0; i<N; i++)
	{
		result[i]=0;
	}
	
	for(int i=0; i<N; i++)
	{
		scanf("%d", &a[i]); 
	}
	
	for(int i=0; i<N; i++)
	{
		scanf("%d", &b[i]); 
	}
	
	for(int i=0; i<N; i++)
	{
		result[a[i]]=b[i]; 
	}
	for(int i=0; i<N; i++)
	{
		if(i==0)
		{
			printf("%d", result[i]);
		}
		else
		{
			printf(" %d", result[i]);
		} 
	}
	printf("\n");
	return 0; 
}
