#include <stdio.h>

int main ()
{
	double X; 
	double Y; 
	scanf("%lf %lf", &X, &Y); 
	
	for(int i=0; i<3; i++) {
		X += X * Y / 100;
		// sama kayak X = X + ( X * Y / 100 );
	}
	printf("%0.2lf\n", X); 
	return 0;
}
