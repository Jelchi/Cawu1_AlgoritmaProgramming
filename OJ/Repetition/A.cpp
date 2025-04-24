#include <stdio.h>

int main ()
{
	int N, M; 
	scanf("%d %d", &N, &M); 
	
	for(int i=N; i<=M+N-1; i++)
	printf("%d\n", i); 
	return 0; 
}
