#include <stdio.h>

int main ()
{
	char name[100]; 
	scanf("%[^\n]s", name); 
	printf("Happy Birthday to %s.\n", name); 
	
	return 0; 
}
