#include <stdio.h> 

int main(){
	FILE *fp = fopen("testdata.in", "r"); 
	int a, b; 
	fscanf(fp, "%d %d", &a, &b); 
	printf("%d", a+b); 
	printf("\n"); 

	fclose(fp); 
	return 0; 
}