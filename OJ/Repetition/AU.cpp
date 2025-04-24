#include <stdio.h>

int main ()
{
	int T, N; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d", &N); 
		printf("Case #%d: ", i); 
		
		for(int j=0; j<N; j++)
		{
			char alpabet = 'a'+j; 
			printf("%c", alpabet); 
		}
		printf("\n"); 
	}
	return 0; 
}
