#include <stdio.h>

int main ()
{
	 int T, N, A, B, C, D,tambah;

	 scanf("%d", &T); 
	 for(int i = 1; i<=T; i++)
	 {
	 	scanf("%d %d %d %d %d", &N, &A, &B, &C, &D); 
	 	printf("Case #%d: ", i); 
	 	
		 for(int j=1; j<=N; j++)
			if(j % A == 0||j % B == 0||j % C == 0||j % D == 0)
			tambah ++; 
			
			printf("%d\n", tambah);
			tambah = 0;
	 }
	
		 return 0; 
} 

