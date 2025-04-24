/*
- function 
- variable scope
- rekursi dan ikursi 
*/

#include <stdio.h>

int sum (int a, int b){
	return a + b; 	
}


int arr[5] = {1, 2, 3, 4, 5}; 

void swap(int *a, int *b){
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}

int main (){
	
//	int total = sum (5, 10); 
//	printf("%d\n", total); 
//	
//	//printf("%d", sum(5, 10)); 
	
	for(int i=0; i<5; i++){
		printf("%d ", arr[i]); 
	}
	
	puts(""); 
	swap(&arr[0], &arr[1]); 
	for(int i=0; i<5; i++){
		printf("%d ", arr[i]); 
	}
	return 0; 
}
