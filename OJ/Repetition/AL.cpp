#include <stdio.h>

int main ()
{
	long long int N,M, x, y; //x weapon damage y dragon damage 
	scanf("%lld %lld",&N, &M); 
	
	int maxx = 0; 
	int maxy = 0;
	for(int i = 1; i<=N;i++) //cari max dagame weapon 
	{
		scanf("%lld", &x); 
		if(maxx < x)
		{
			maxx = x; 
		}
	}
	for(int i=1; i<=M; i++) //cari max damage dragon 
	{
		scanf("%lld", &y); 
		if(maxy < y)
		{
			maxy = y; 
		}
	}
	// check apakah bibi bisa mengalahkan naga 
	if(maxx > maxy)
	{
		printf("The dark secret was true\n"); 
	}
	else 
	{
		printf("Secret debunked\n");
	}
	return 0; 
}
