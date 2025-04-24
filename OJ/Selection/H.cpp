#include <stdio.h>

int main ()
{
	char x1, x2, x3; 
	scanf ("%c %c %c", &x1, &x2, &x3); 
	
	int a = x1, b = x2, c = x3; 
	if(a<b && a<c)
	{
		printf("1 "); 
		
		if(b<c)
		{
			printf("2 3\n");
		} 
		else 
		{
			printf("3 2\n"); 
		}
	}
	else 
	if(b<a && b<c)
	{
		printf("2 "); 
		
		if(a<c)
		{
			printf("1 3\n"); 
		}
		else 
		{
			printf("3 1\n"); 
		}
	}
	else 
	if(c<a && c<b)
	{
		printf("3 "); 
	
		if(a<b)
		{
		printf("1 2\n"); 
		}
		else 
		{
		printf("2 1\n"); 
		}
	}
		
	return 0; 
 }  
