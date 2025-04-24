/*
	Make a global array with the type data `int` with the size of 10,
	for each indexes inside the array, ask the user to input the value for each index.
	After the array is full, display the array data.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a[10]; 

int main() {
	for(int i=1; i<=10; i++){
		scanf("%d", &a[i]); 
		getchar(); 
	}
	
	for(int i=1; i<=10; i++){
		printf("%d\n", a[i]); 
	}
	return 0;
}
