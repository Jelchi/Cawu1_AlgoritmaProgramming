#include <stdio.h>

int main ()
{
	int T, N;//test case 
	char name;
	
	scanf("%d", &T); 
	for(int i=1; i<=T; i++)
	{
		int lili = 0; 
		int bibi = 0;
		
		scanf("%d", &N);
		for(int j= 0; j<=N; j++) 
		{
			scanf("%c", &name); 
			
			if(name=='L')
			{
				lili++;
			}
			else if(name=='B')
			{
				bibi++; 
			}
		
		}
	
		if(lili>bibi)
		{
			printf("Lili\n"); 
		}
		else if(bibi>lili)
		{
			printf("Bibi\n"); 
		}
		else 
		{
			printf("None\n");
		}
		
	 } 
	 
	return 0;
}
