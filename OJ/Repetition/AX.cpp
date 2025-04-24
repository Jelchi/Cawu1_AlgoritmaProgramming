#include <stdio.h>

int main ()
{
	long long int N, A, max = 0; //N jumlah saham, A keuntungan 
	scanf("%lld", &N); 
	
	for(int i=0; i<N; i++) // max dr 0-N
	{
		 scanf("%lld", &A);  
		 
		 if(A > 0)
		 {
		 	max += A;
		  } 
	}
	
	printf("%lld\n", max);
	return 0; 
}
