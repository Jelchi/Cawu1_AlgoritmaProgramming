#include <stdio.h>
#include <string.h>

int main ()
{
	int T, N; 
	char S [101]; 
	char K [101]; 
	
	scanf("%d", &T); 
	for(int i = 1; i<=T; i++)
	{
		scanf("%d", &N); 

		scanf("%s", &S); 
		scanf("%s", &K); 
		
		int benar = 0; 
		int nilai = 0; 
		for(int j =0; j<N; j++)
		{
			if(S[j]==K[j])
			{
				benar++; 
			}
		}
		nilai = benar*100/N; 
		printf("Case #%d: %d\n", i, nilai);
	}
	return 0; 
}
