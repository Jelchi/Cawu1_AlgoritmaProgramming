#include <stdio.h>

int main ()
{
	int T, N, A; 
	
	scanf("%d", &T); //jumlah kasus
	for(int i=1; i<=T; i++)
	{
		int oddCount = 0, evenCount = 0; 
		scanf("%d", &N); //jumlah integer
		for(int j=1; j<=N; j++)
		{
			scanf("%d", &A); //integer
			
			if(A % 2 == 0)
			{
				evenCount++; 
			}
			else
			{
				oddCount++; 
			}
		}
		printf("Odd group : %d integer(s).\n", oddCount); 
		printf("Even group : %d integer(s).\n\n", evenCount);
	}
	return 0; 
}
