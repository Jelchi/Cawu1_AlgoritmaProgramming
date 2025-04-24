#include<stdio.h>

int data[8][8];

void recursive(int x, int y, int step)
{
	if (x < 0 || x > 7 || y < 0 || y > 7) return;
	int explore = 0;
	if (data[x][y] == -1){
		data[x][y] = step;
		explore = 1;
	}
	else{
		if (step < data[x][y])	{
			data[x][y] = step;
			explore = 1;
		}
	}
	if (explore == 1 && step < 7)	{
		recursive(x-1, y-2, step+1);
		recursive(x+1, y-2, step+1);
		recursive(x+2, y-1, step+1);
		recursive(x+2, y+1, step+1);
		recursive(x+1, y+2, step+1);
		recursive(x-1, y+2, step+1);
		recursive(x-2, y-1, step+1);
		recursive(x-2, y+1, step+1);
	}
	
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	for(int x = 0 ; x < t ; x++)
	{

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
				data[i][j] = -1;
			}
			
		recursive(x1, y1, 0);
	
		for(int i = 0 ; i < 8 ; i++)
		{
			for(int j = 0 ; j < 8 ; j++)
			{
				printf("%d", data[i][j]);
			}
			printf("\n");
		}
		printf("Case #%d: %d\n", x+1, data[x2][y2]);
	}
			
	return 0;
}
