#include <stdio.h>

int main ()
{
	int N, ki, posisi=0; 
	scanf("%d", &N); //lemparan dadu 
	
	for(int i=1; i<=N; i++)
	{
		scanf("%d", &ki); 
		posisi+=ki; 
		
		if(posisi == 30)
		{
			posisi = 10; 
		}
		else 
		if(posisi == 12)
		{
			posisi = 28; 
		}
		else 
		if(posisi == 35)
		{
			posisi = 7; 
		}
		else 
		if(posisi >= 40)
		{
			posisi %= 40; 
		}
		
	}
	printf("%d\n", posisi); 
	return 0; 
}
