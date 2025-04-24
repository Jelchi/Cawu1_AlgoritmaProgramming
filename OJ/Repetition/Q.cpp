#include <stdio.h>

int main ()
{
	int T; 
	scanf("%d", &T); //test case
	
	for(int i =1; i<=T; i++)
	{
		int N, X; 
		scanf("%d %d", &N, &X); // number of page, page number
		
		//buku ganjil 
		if(N %2 != 0)
		{
			if(X == N-1)
			{
				printf("Case #%d: %d\n", i, 0); 
				continue; 	
			}
		}
		
		// buku depan & belakang  
		if(X == 1 || X == N)
		{
			printf("Case #%d: %d\n", i, 0); 
			continue; 
		}
		
		// buka dari depan atau belakang 
		if(N-X < X)
		{
			X = N - X;
			if(N %2 == 0)
			{
				X+=1;
			}
		}
		if(X %2 != 0)
		{
			X-=1; 
		}
		printf("Case #%d: %d\n", i, X/2); 
	}
	return 0; 
}
