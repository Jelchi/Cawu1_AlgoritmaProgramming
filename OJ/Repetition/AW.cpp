#include <stdio.h>

int main ()
{
	int T, N, A;
	scanf("%d", &T); // kelas 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d", &N); // siswa 
		
		int max = 0;
		int sum = 0; 
		
		for(int j=1; j<=N; j++)
		{
			scanf("%d", &A); //nilai 
			
			if(A>max)
			{
				max = A; 
				sum = 1; 
			}
			else 
			if (A == max)
			{
				sum++; 
			}
		}
		printf("Case #%d: %d\n", i, sum); 
	}
	return 0; 
}
