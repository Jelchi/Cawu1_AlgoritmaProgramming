#include <stdio.h>

int main()
{
	char n1[101]; 
	double h1; 
	int a1; 
	scanf("%s %lf %d", n1, &h1, &a1); 
	printf("Name 1: %s\n", n1); 
	printf("Height 1: %0.2lf\n", h1); 
	printf("Age 1: %d\n", a1); 
	
	char n2[101]; 
	double h2; 
	int a2; 
	scanf("%s %lf %d", n2, &h2, &a2); 
	printf("Name 2: %s\n", n2); 
	printf("Height 2: %0.2lf\n", h2); 
	printf("Age 2: %d\n", a2); 
	
	return 0; 
}

