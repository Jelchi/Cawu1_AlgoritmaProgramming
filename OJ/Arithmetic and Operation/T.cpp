#include <stdio.h>

int main ()
{
	int a, b, c, d; 
	char x [101]; 
	
	for(int i=0; i<5; i++)
	{
		scanf("%s %02d:%02d-%02d:%02d", &x, &a, &b, &c, &d); 
		printf("%s %02d:%02d-%02d:%02d\n", x, a-1, b, c-1, d); 
	}
	return 0; 
}
