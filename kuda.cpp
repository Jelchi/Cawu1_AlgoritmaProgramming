#include<stdio.h>

int ketemu = 0;
int data[8][8];

void recursive(int x, int y, int bw, int step, int max)
{
	if (ketemu == 1) return;
	if (x < 0 || x > 7 || y < 0 || y > 7) return;
	//printf("%d%d %d %d\n", x,y, step, bw);
	int cari = bw==1?2:1;
	if (data[x][y] == cari)
	{
		ketemu = 1;
		return;
	}
	else if (data[x][y] == 0)
	{
		data[x][y] = bw;
		if (step < max)
		{
			recursive(x-1, y-2, bw, step+1, max);
			recursive(x+1, y-2, bw, step+1, max);
			recursive(x+2, y-1, bw, step+1, max);
			recursive(x+2, y+1, bw, step+1, max);
			recursive(x+1, y+2, bw, step+1, max);
			recursive(x-1, y+2, bw, step+1, max);
			recursive(x-2, y-1, bw, step+1, max);
			recursive(x-2, y+1, bw, step+1, max);
		}
	}
	
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	for(int x = 0 ; x < t ; x++)
	{
		ketemu = 0;
		int step;
		scanf("%d", &step);
		getchar();
		char x1,y1, x2, y2;
		scanf("%c%c %c%c", &x1,&y1, &x2, &y2);
		getchar();
		
		x1 -= 'A';
		x2 -= 'A';
		y1 -= '1';
		y2 -= '1';
		
		//printf("%d %d %d %d", x1, y1, x2, y2);
		
		for(int i = 0 ; i < 8 ; i++)
			for(int j = 0 ; j < 8 ; j++)
			{
				/*
				if (i == x1 && j == y1)
					data[i][j] = 1;
				else if (i == x2 && j == y2)
					data[i][j] = 2;
				else*/
					data[i][j] = 0;
			}
			
		recursive(x1, y1, 1, 0, step);
		
		recursive(x2, y2, 2, 0, step);
	
		printf("Case #%d: %s\n", x+1, ketemu==1?"YES":"NO");
	}
			
	return 0;
}
