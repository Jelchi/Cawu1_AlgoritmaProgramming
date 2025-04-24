#include <stdio.h> 

int main ()
{
	int N, ki;
	int p = 0; 
	
	scanf("%d", &N); 
	
	for(int i = 1; i<=N; i++)
	{
		scanf("%d", &ki); 
		p+=ki; 
		
		if(p==9)
		{
			p = 21; 
		}
		else 
		if (p==33)
		{
			p = 42; 
		}
		else 
		if(p==76)
		{
			p = 92;
		}
		else 
		if(p==53)
		{
			p = 37; 
		}
		else 
		if(p==80)
		{
			p = 59; 
		}
		else 
		if(p==97)
		{
			p = 88; 	
		}
	}
	
	printf("%d\n", p); 
	return 0; 
}
