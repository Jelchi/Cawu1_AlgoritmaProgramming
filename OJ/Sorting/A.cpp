#include <stdio.h> 

void mergeSort(int *arr, int left, int right){
	//stop 
	if(left == right){
		return; 
	}

	//merge
	int pivot= (left+right)/2; 
	mergeSort(arr, left, pivot); 
	mergeSort(arr, pivot+1, right); 

	//sorting 
	int divLen = (right - left)+1; 
	int temp[divLen]; 
	int idx = 0;

	// racing 
	int leftRace = left; 
	int rightRace = pivot+1; 
	int leftGoal = pivot; 
	int rightGoal = right; 

	//race 
	while(leftRace <= leftGoal && rightRace <= rightGoal){
		if(arr[leftRace] < arr[rightRace]){
			temp[idx] = arr[leftRace]; 
			idx++; 
			leftRace++; 
		} else {
			temp[idx] = arr[rightRace]; 
			idx++; 
			rightRace++; 
		}
	}  

	//finished 
	while(leftRace <= leftGoal){
		temp[idx] = arr[leftRace];
		idx++; 
		leftRace++; 
	}

	while(rightRace <= rightGoal){
		temp[idx] = arr[rightRace]; 
		idx++; 
		rightRace++; 
	}
	idx--; 

	//cleaning up
	for(int i=right; i>=left; i--){
		arr[i] = temp[idx]; 
		idx--; 
	}
}

int main (){
	int number; 
	scanf("%d", &number); 
	getchar(); 

	int arr[number]; 
	for(int i=0; i<number; i++){
		scanf("%d", &arr[i]); 
		getchar(); 
	}

	mergeSort(arr, 0, number-1); 

	int diff[number];
	for(int i=0; i<number-1; i++){
		diff[i]= arr[i+1]-arr[i];
	}

	int max = diff[0]; 
	for(int i=0; i<number-1; i++){
		if(max < diff[i]){
			max = diff[i];
		}
	}
	
	int counter = 0;
	for(int i=0; i<number-1; i++){
		if(max == diff[i]){
			if (counter == 0){
				printf("%d %d", arr[i], arr[i+1]); 	
				counter ++;
			}  else {
				printf(" %d %d", arr[i], arr[i+1]); 
			}
		}
	}
	printf("\n");
	return 0; 
}