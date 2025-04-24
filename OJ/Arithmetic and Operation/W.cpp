#include <stdio.h>

int main ()
{
	int n;
	int mid; 
	
	for(int i=0; i<3; i++)
	{
		scanf("%d", &n);
		mid = (n/10)%10; 
		printf("%d\n", mid); 
	}
	return 0; 
}
