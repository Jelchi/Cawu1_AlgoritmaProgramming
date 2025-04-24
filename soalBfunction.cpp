#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++)
	{
		int n;
		scanf("%d", &n);
		int arr[n+1];
		for(int j = 1 ; j <= n ; j++)
		{
			scanf("%d", &arr[j]);
		}
		
		printf("Case #%d:\n", i);
		int count = n%2==0?n/2:n/2+1;
		int mulai = 64;
		while (mulai > n)
		{
			mulai = mulai/2;
		}
		for(int j = 0 ; j < count ; j++)
		{
			int total = 0;
			if (mulai > n)
			{
				if (mulai % 2 == 1)
					mulai++;
					
				mulai = mulai/2;
			}
			if (mulai <= n)
			{
				for(int k = mulai ; k >=1 ; k /=2)
				{
					total += arr[k];
				}
				printf("%d\n", total);
			}
			mulai++;
		}
		
	}
	return 0;
}
