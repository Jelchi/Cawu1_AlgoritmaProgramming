#include <stdio.h>

int main ()
{
	int N; 
	long long int press = 0;
	scanf("%d", &N); 
	
	for(int i=0; i<N; i++)
	press += 100 + 50 * i;
	printf("%lld\n", press); 
	 
	return 0; 
}
