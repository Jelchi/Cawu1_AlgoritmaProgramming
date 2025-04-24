#include<stdio.h>

int binarySearch(int arr[], int len, int toFind) {
	int left = 0;
	int right = len - 1;
	
	while(left <= right) {
		int pivot = (left + right) /2;

		if(toFind < arr[pivot]) {
			right = pivot - 1;
			continue;
		}

		if(toFind > arr[pivot]) {
			left = pivot + 1;
			continue;
		}

		if(toFind == arr[pivot]) return pivot;
		break;
	}
	return -1;
}

int main() {
	int arr[] = {1,3,6,8,9};
	
	int len = 5;
	
	int findSix = binarySearch(arr, len, 3);
	
	printf("%d", findSix)	;
}
