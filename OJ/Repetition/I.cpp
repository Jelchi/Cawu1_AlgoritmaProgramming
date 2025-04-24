#include <stdio.h>

int main ()
{
	int T; 
	int jojo, lili, bibi, orangLain, average, count = 0; 

	scanf("%d\n", &T); 
	scanf("%d %d %d\n", &jojo, &lili, &bibi);
	
	for(int i=1; i<=T; i++)
	{
		scanf("%d", &orangLain); 
		count += orangLain; 	
	}
		average = (count + jojo + lili + bibi)/(T+3); 
		
		if(jojo >= average)
		{
			printf("Jojo lolos\n"); 
		}
		else 
		{
			printf("Jojo tidak lolos\n"); 
		}
		
		if(lili >= average)
		{
			printf("Lili lolos\n"); 
		}
		else 
		{
			printf("Lili tidak lolos\n");; 
		}
		
		if(bibi >= average)
		{
			printf("Bibi lolos\n"); 
		}
		else 
		{
			printf("Bibi tidak lolos\n"); 
		}
	return 0; 
}
