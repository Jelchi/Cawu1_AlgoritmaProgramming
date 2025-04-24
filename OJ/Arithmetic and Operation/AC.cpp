#include <stdio.h>

int main ()
{
	int N; 
	scanf("%d", &N); 
	long long int result =  1;
	
	for(int i=1; i<=N; i++)
	result *=2;
	printf("%lld\n", result - 1); 
	return 0; 
}
