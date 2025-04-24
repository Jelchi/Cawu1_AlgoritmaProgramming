#include <stdio.h>
#include <stdbool.h>
//bool itu untuk true or false 

int main ()
{
	int x, y, k; 
	scanf("%d %d %d", &x, &y, &k); 
	int t = 0;
	bool found = false; 

	for(int i=x; i<=100; i++) 
	{
		if(i==y && i==k)
		{
			found = true; 
			break; 
		}		
		t++;
		y--;
	}
	
	if(found)
	{
		printf("%d\n", t); 
	}else {
		printf("-1\n"); 
	}
	
return 0; 
}
