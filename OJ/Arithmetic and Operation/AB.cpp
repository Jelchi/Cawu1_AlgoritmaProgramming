#include <stdio.h>

int main ()
{
	int N;
	long long int sum = 0; 
	 
	scanf("%d", &N); 
	for(int i = 0; i<N; i++)
	sum += 100 + 50 * i; 
	printf("%lld\n", sum);
	 
	return 0; 
}
