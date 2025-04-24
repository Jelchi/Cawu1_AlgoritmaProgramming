#include <stdio.h>
#include <string.h>

int main ()
{
	int N;
	char str[1001]; 
	int panjang=strlen(str); 
	scanf("%d", &N); 
	for(int i=1; i<=N; i++)
	{
		scanf("%s", &str); 
		printf("Case #%d : ", i);
		panjang =strlen(str); 

		for(int j=panjang-1; j>=0; j--)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0; 
}
