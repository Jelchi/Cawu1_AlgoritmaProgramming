#include <stdio.h>

int main ()
{
	double L, B, H; 
	//L(Luas), B(Panjang Sisi), H (Tinggi)
	//luas prisma (2*luas alas)+(keliling alas*tinggi)
	scanf("%lf %lf %lf", &L, &B, &H);
	 
	printf("%0.3lf\n", (2*(B*H)/2)+((3*B)*L)); 
	
	return 0; 
}
