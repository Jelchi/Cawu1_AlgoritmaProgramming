//sorting

#include <stdio.h> 

void printfArray(int *arr, int len){
	for(int i=0; i<len; i++){
		printf("%d ", arr[i]); 
	}
	printf("\n=====================\n");
}

void swap(int *greater, int *lower){
	int temp = *greater; 
	*greater = *lower; 
	*lower = temp; 
	
}

void bubbleSort(int *arr, int len){
	for(int i=0; i<len; i++){
		for(int j=0; j<len;j++){
			if(arr[i]>arr[j]){
				swap(&arr[i], &arr[j]); 
			}
		}
	}
}

void bubbleSortReal(int *arr, int len){
	for(int i=0; i<len-1; i++){
		int swapped = 0; 
		for(int j=0; j<len-1; j++){
			if(arr[i]> arr[j+1]){
				swap(&arr[j], &arr[j+1]); 
				swapped = 1; 
			}
		}
		if(swapped == 0){
			break;
		}
	}
}

void selectionSort(int *arr, int len){
	for(int i=0; i< len; i++){
		int min_idx = i; 
		for(int j=1; j<len; j++){
			if(arr[min_idx] > arr[j]){
				min_idx = j;
			}
		}
		if(min_idx != i){
			swap(&arr[i], &arr[min_idx]); 
		}
	}
}

void insertionSort(int *arr, int len){
	int key; 
	for(int i=1; i<=len; i++){
		key = arr[i]; 
		int j = i-1; 
		while(j>=0 && arr[j]>key){
			swap(&arr[j+1], &arr[j]);
			j=i-1; 
		}
//		arr[j+1] = key; 
//	printfArray(arr, len);  
	}
}

int main (){
	int listNumber[] = {10,2,7,8,5,2}; 
	int len = 6; 
	printfArray(listNumber, len);  
	
//	selectionSort(listNumber, len); 
	bubbleSort(listNumber, len); 
//	insertionSort(listNumber, len); 
	printfArray(listNumber, len);  

	return 0; 
}
