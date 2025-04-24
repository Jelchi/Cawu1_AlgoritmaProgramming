#include <stdio.h>

int main ()
{
	int N, temp; 
	scanf("%d", &N); 
	long long int kamar[N]; 
	 
	for(int i=0;i<N; i++)
	{
		scanf("%lld", &kamar[i]); 
	}
	
	for( int i=0; i<N-1; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			if(kamar[i]>kamar[j])
			{
				temp = kamar[i]; 
				kamar[i]=kamar[j]; 
				kamar[j]=temp; 
			}
		}
	}
	 
	int count=1; 
	int indeks = 0;
	for(int i=0; i<N; i++)
	{
		if(kamar[indeks]!=kamar[i])
		{
			count++; 
			indeks = i;
		}
	}
	printf("%d\n", count); 
	return 0;
}
	 

