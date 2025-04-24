#include <stdio.h>

int main ()
{ 
	int a,b;
	char c,d;
	
	for(int i=0; i<3; i++)
	{
		scanf("%d %c %d %c", &a, &c, &b, &d);
		printf("%d\n", a + b); 
	}
}
