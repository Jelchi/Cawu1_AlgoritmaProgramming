#include <stdio.h> 

int main ()
{
	int T; //test case
	long long int N; 
	
	scanf("%d", &T); 
	for(int i=1; i<=T; i++)
	{
		scanf("%lld", &N); 
		
		long long int xi[N]; 
		for(int j=0; j<N; j++)
		{
			scanf("%lld", &xi[j]); 
		}
		int diffMin = xi[0]-xi[1]; 
		if(diffMin < 0)
		{
			diffMin *= -1;
		}
		for(int j=0; j< N-1; j++)
		{
			int currentDiff = xi[j] - xi[j+1]; 
			if(currentDiff < 0)
			{
				currentDiff *= -1; 
				if(currentDiff < diffMin) 
				{
					diffMin = currentDiff; 
				}
			}
			else 
			{
				if(currentDiff < diffMin)
				{
					diffMin = currentDiff; 
				}
				
			}
			
		}
		printf("Case #%d: %d\n", i, diffMin); 
	}
	return 0; 
}
