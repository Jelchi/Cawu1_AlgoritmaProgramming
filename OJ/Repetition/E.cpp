#include <stdio.h>

int main ()
{
	int T; 
	long long int X, P; 
	
	scanf("%d", &T); 
	for(int i = 0; i<T; i++)
	{
		scanf("%lld %lld", &X, &P); 
		
		long long int a[101], j = 0;
		for (int k = 0; k < 101; k++)
		{
			a[k] = 0;
		}
		while(X > 0)
		{
			a[j] = X%2; 
			X/=2; 
			j++; 
		}
		printf("%d\n", a[P]);
	}
	return 0; 
}
