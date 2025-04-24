#include <stdio.h>

int main ()
{
	int T, A, B; //testcase
	scanf("%d",  &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d %d", &A, &B); // A beli B tukar
		
		int total= A; 
		
		while(A>=B)
		{
			int New = A/B; 
			total += New; 
			A = New + (A%B); 
		}
		printf("Case #%d: %d\n", i, total); 
	}
	return 0; 
}
