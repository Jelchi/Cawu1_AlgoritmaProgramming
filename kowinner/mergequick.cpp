#include<stdio.h>

void swap(int arr[], int a, int b) {
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void mergeSort(int arrToSort[], int left, int right) {
	// Base case: Stop Division
	if(left == right) return;
	
	// Divide	
	int pivot = (left + right) / 2;
	
	mergeSort(arrToSort, left, pivot);
	mergeSort(arrToSort, pivot + 1, right);
	
	// Conquer (sorting)
	// tempArr initialization
	int divLen = right - left + 1;
	int tempArr[divLen];
	int tempIndex = 0;
	
	// Race Pointers
	int leftRace = left;
	int leftGoal = pivot;
	int rightRace = pivot + 1;
	int rightGoal = right;
	
	// RACING
	while(leftRace <= leftGoal && 
	rightRace <= rightGoal) {
		// LeftRace is smaller
		if(arrToSort[leftRace] < arrToSort[rightRace]) {
			tempArr[tempIndex] = arrToSort[leftRace];
			tempIndex++;
			leftRace++;
		}
		// RightRace is smaller / equals
		else {
			tempArr[tempIndex] = arrToSort[rightRace];
			tempIndex++;
			rightRace++;
		}
	}
	
	// Race finished, cleaning up the rest
	// 1. Right finished, left cleaning up
	while(leftRace <= leftGoal) {
		tempArr[tempIndex] = arrToSort[leftRace];
		tempIndex++;
		leftRace++;
	}
	
	// 2. Left finished, right cleaning up
	while(rightRace <= rightGoal) {
		tempArr[tempIndex] = arrToSort[rightRace];
		tempIndex++;
		rightRace++;
	}
	
	// Moving tempArr to actual array
	tempIndex--;
	for(int i = right ; i >= left ; i--) {
		arrToSort[i] = tempArr[tempIndex];
		tempIndex--;
	}
}

void quickSort(int arrToSort[], int left, int right) {
	// Base case: Stop dividing
	if(left >= right) return;
	
	int pivot = (left + right) / 2;
	
	// Swapping Pivot
	swap(arrToSort, pivot, right);
	pivot = right;
	
	// Race
	int leftRace = left;
	int rightRace = right - 1;
	
	while(leftRace <= rightRace) {
		// Moving leftRace
		if(arrToSort[leftRace] <= arrToSort[pivot]) {
			leftRace++;
			continue;
		}
		
		// Moving rightRace
		if(arrToSort[rightRace] >= arrToSort[pivot]) {
			rightRace--;
			continue;
		}
		
		// Swapping leftRace & rightRace
		swap(arrToSort, leftRace, rightRace);
	}
	
	// Finishing Race, reswap Pivot
	swap(arrToSort, pivot, leftRace);
	pivot = leftRace;
	
	// Divide
	quickSort(arrToSort, left, pivot - 1);
	quickSort(arrToSort, pivot + 1, right);
}

int main() {
	int arrLen = 8;
	int arr[] = {3, 8, 6, 5, 1, 7, 4, 2};
	
	// print all in array
	printf("Before: \n");
	for(int i = 0 ; i < arrLen ; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	// Sorting
//	mergeSort(arr, 0, arrLen - 1);
	quickSort(arr, 0, arrLen - 1);
	
	printf("After: \n");
	for(int i = 0 ; i < arrLen ; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
