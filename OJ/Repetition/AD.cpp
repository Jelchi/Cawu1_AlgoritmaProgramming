#include <stdio.h>
// cari modus 
int main ()
{
	int N; 
	int ni[1001]; 
	int sama; 
	int max = 0; 
	scanf("%d", &N); 
	
	for(int i=0; i<N; i++)
	{
		scanf("%d", &ni[i]); 
	}
	
	for(int m=0; m<N; m++)
	{
		sama=0; 
		for(int n=0; n<N; n++)
		{
			if (ni[m]==ni[n])
			{
				sama++; 
			}
		}
		if(max < sama)
		{
			max = sama;
		}
	}
	printf("%d\n", max); 
	
	return 0; 
}
