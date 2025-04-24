#include <stdio.h>

int main ()
{
	long long int a, b, c; 
	long long int result; 
	scanf("%lld %lld %lld", &a, &b, &c); 
	
	result = a*b*c; 
	printf("%lld\n", result); 
	return 0; 
}
