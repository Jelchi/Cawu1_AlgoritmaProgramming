#include <stdio.h>

int main ()
{
	int T, A, B; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d %d", &A, &B); //A kosong B tuker
		int total = A; 
		
		while(A >= B)
		{
			int tuker = A/B; 
			total += tuker; 
			A = tuker + (A%B); 
		}
		printf("Case #%d: %d\n", i, total); 
	}
	return 0; 
}
