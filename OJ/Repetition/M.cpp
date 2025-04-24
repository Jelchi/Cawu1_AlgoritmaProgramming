#include <stdio.h>

int main ()
{
	int T, count; //test case 
	long long int N, M, harga; // N(jumlah makanan) M(sisa uang) 
	scanf("%d", &T); 
	
	for(int i =1; i<=T; i++)
	{
		count = 0;
		scanf("%lld %lld", &N, &M); 		
		for(int j=1; j<=N; j++)
		{
			scanf("%lld", &harga); 
			count += harga; 
		}
		
		printf("Case #%d: ",i); 
		if(count>M)
		{
			printf("Wash dishes\n"); 
		}
		else 
		{
			printf("No worries\n"); 
		}
	 } 
	 return 0; 
}
