#include <stdio.h>
#include <string.h>

int main (){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	
	int max = 0;
	int temp = 0;
	temp = a / 4;
	if (a % 4 != 0) temp++;
	if (temp > max) max = temp;
	
	temp = b / 2;
	if (b % 2 != 0) temp++;
	if (temp > max) max = temp;
	
	temp = c / 1;
	if (c % 1 != 0) temp++;
	if (temp > max) max = temp;
	
	int belia;
	int belib;
	int belic;
	
	belia = max * 4 - a;
	belib = max * 2 - b;
	belic = max * 1 - c;
	printf("%d %d %d %d\n", max, belia, belib, belic);
	
	
	/*
	char s[100];
	scanf("%[^\n]", &s);
	int idxawal = 0;
	int idxakhir = 0;
	for(int i = 0; i < strlen(s) ; i++)
	{
		if (s[i] == ' ')
		{
			idxakhir = i-1;
			for(int j = idxakhir ; j >= idxawal; j--)
			{
				printf("%c", s[j]);
			}
			idxawal = i+1;
			printf(" ");
		}
	}
	idxakhir = strlen(s) - 1;
	for(int j = idxakhir ; j >= idxawal; j--)
	{
		printf("%c", s[j]);
	}
	printf("\n");
	*/
	/*
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int totala, totalb,totalc;
	totala = a * 5000;
	totalb = b * 6000;
	totalc = c * 7000;
	
	if (totala > totalb && totala > totalc)
	{
		printf("%d Apel\n", totala);
	}
	else if (totalb > totala && totalb > totalc)
	{
		printf("%d Jeruk\n", totalb);
	}
	else if (totalc > totala && totalc > totalb)
	{
		printf("%d Nanas\n", totalc);
	}
	else
	{
		printf("Cancel\n");
	}
	*/
	/*
	int n, m;
	scanf("%d %d", &n, &m);
	int durasi[n];
	int total = 0;
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d", &durasi[i]);
		total += durasi[i];
	}
	//double rata = total / n * m / 100;
	double rata = (double)total * (double)m / (double)n / 100;
	
	int count = 0;
	for(int i = 1 ; i <= n ; i++)
	{
		if (durasi[i-1] > rata)
		{
			if (count == 0)
			{
				printf("%d", i); //3	// 4	// 5
				count++;
			}
			else
			{
				printf(" %d", i); //3	// 4	// 5
				count++;
			}
		}
	}
	if (count == 0)
	{
		printf("0");
	}
	
	printf("\n");
	*/
	/*
	char s[100];
	scanf("%[^\n]", &s);
	
	for(int i = 0 ; i < strlen(s) ; i++)
	{
		char a = s[i];
		if (a == ' ') continue;
		if (a >= 'A' && a <= 'Z')
		{
			a = a - 'A' + 'a';
		}
		else // huruf kecil
		{
			a = a - 97 + 65;
		}
		s[i] = a;
	}
	printf("%s\n", s);
	*/
	return 0;
}
