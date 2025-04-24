#include <stdio.h>

int main ()
{
	int N, tambah=0; 
	scanf("%d", &N); 
	int x; 
	for(int i=1; i<=N; i++)
	{
		scanf("%d", &x);
		tambah+=x; 
	}
	printf("%d\n", tambah);
	return 0;
}
