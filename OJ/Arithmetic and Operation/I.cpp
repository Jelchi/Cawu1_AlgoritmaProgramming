#include <stdio.h>

int main ()
{
	int a; 
	scanf("%d", &a); 
	
	int sum = a + a; 
	int minus = sum - 1; 
	printf("%d plus %d is %d\n", a, a, sum); 
	printf("minus one is %d\n", minus); 
	return 0; 
}
