#include <stdio.h>

int main ()
{
	long long int T, A, B; 
	scanf("%lld", &T); 
	for (int i=1; i<=T; i++)
	{
		scanf("%lld %lld", &A, &B); 
		printf("Case #%lld: ", i); 
		if (A>B)
		{
			printf("Go-Jo\n"); 
		}
		else 
		{
			printf("Bi-Pay\n"); 
		}
	}
	return 0; 
}
