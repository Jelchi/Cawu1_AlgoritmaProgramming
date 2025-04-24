#include<stdio.h>

int main () // 2*phi*r*(r+t)
{
	long long int T; 
	double R, H; 
	const double phi =3.14; 
	
	scanf("%lld", &T); 
	
	for(long long int i=1; i<=T; i++)
	{
		scanf("%lf %lf", &R, &H); 
		printf("Case #%d: %0.2lf\n", i, 2*phi*R*(R+H)); 
	}

	return 0; 
 } 
