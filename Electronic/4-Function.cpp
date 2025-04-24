/*
	Make a function that could add a int to an array of int.
*/

#include <stdio.h>
#include <string.h>

int x[1001]; 
int i = 0; 
void arr(int a){
	x[i] = a; 
	i++; 
	
}

int main() {
	arr(1); 
	arr(2); 
	arr(3); 
	
	for(int j=0; j<i; j++){
		printf("%d", x[j]); 
	}	
	 
	return 0;
}
