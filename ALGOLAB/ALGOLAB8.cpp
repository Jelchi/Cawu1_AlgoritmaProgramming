//searching

/*#include<stdio.h> 

int linearSearch(int *arr, int len, int target){
	for(int i=0; i<len; i++){
		if(arr[i]==target){
			return i; 
		} 
	}
	return -1; //asumsinya klo sudah tidak ketemu maka -
}

int main(){
	//buat array yang isinya angka 
	int arr[5]={1, 3, 5, 7, 9};
	
	//linear search
	 int foundIdx = linearSearch(arr, 5, 5); 
	 //klo tidak ketemu maka di minta buat print tidak ketemu, jika ketemu diminta print ketemu berserta hasilnya idx
	 if(foundIdx == -1){
	 	printf("tidak ketemu"); 
	 }else {
	 	printf("Ketemu: %d", foundIdx); 
	 }
	 printf("\n"); 
	
	
	
	return 0; 
}*/ 


/*#include <stdio.h>

int binarySearch(int *arr, int left, int right, int target){
//klo tidak ketemu 
	if(left>right){
		return -1; 
	}

//angkanya sama	
	int mid = left+(right-left)/2; 
		if(arr[mid] == target){
			return mid; 
		} else if(arr[mid] > target){//klo tidak sama
			return binarySearch(arr, left, mid -1, target); //ke kiri
		}else {
			return binarySearch(arr, right, mid+1, target); //ke kanan
		}
	}

int main (){
	int arr[5] ={1, 3, 5, 7, 9}; 
	
	int foundIdx = binarySearch(arr, 0, 4,5); 
	
	if(foundIdx == -1){
	 	printf("tidak ketemu"); 
	 }else {
	 	printf("Ketemu: %d", foundIdx); 
	 }
	 printf("\n"); 
	
	return 0; 
}*/ 	


/*#include <stdio.h>

int interpolation(int *arr, int left, int right, int target){
//klo tidak ketemu 
	if(left>right){
		return -1; 
	}

//angkanya sama	
	int mid = left+(target-arr[left])*(right - left)/(arr[right]-arr[left]); 
		if(arr[mid] == target){
			return mid; 
		} else if(arr[mid] > target){//klo tidak sama
			return interpolation(arr, left, mid -1, target); //ke kiri
		}else {
			return interpolation(arr, right, mid+1, target); //ke kanan
		}
	}

int main (){
	int arr[5] ={1, 3, 5, 7, 9}; 
	
	int foundIdx = interpolation(arr, 0, 4,5); 
	
	if(foundIdx == -1){
	 	printf("tidak ketemu"); 
	 }else {
	 	printf("Ketemu: %d", foundIdx); 
	 }
	 printf("\n"); 
	
	return 0; 
}*/


/*#include <stdio.h>
#include <string.h>

int linearSearch(char *arr, char target, int len){
	for(int i=0; i<len; i++){
		if(arr[i] == target){
			return i; 
		}
	}
	return false; 
}
int main (){
	char arr[6] = "Hello"; 
	
	int foundIdx = linearSearch(arr, 'e', 5); 
	
	if(foundIdx == false){
		printf("tidak ketemu"); 
	} else {
		printf("Ketemu : %d", foundIdx); 
	}
	
	printf("\n");
	 
	
	return 0; 
}*/ 

#include <stdio.h>
#include <string.h>

int binarySearch(char arr[][1001], char target[], int kiri, int kanan){
	//klo ga temu
	if(kiri > kanan){
		return -1; 
	}
	
	//angka sama
	int  mid = kiri+(kanan-kiri)/2; 
	
	if(strcmp(arr[mid], target)==0){
		return mid; 
	}else if(strcmp(arr[mid], target)>0){
		return binarySearch(arr, target, kiri, mid-1); 
	}else {
		return binarySearch(arr, target, mid+1,kanan); 
	}
}

int main (){
	char arr[5][1001] = {"Agus", "Bele", "Cesley", "Della", "Ellla"}; 
	
	int foundIdx = binarySearch(arr, "Bele", 0,4); 
	if(foundIdx == -1){
		printf("tidak ketemu"); 
	} else {
		printf("Ketemu : %d", foundIdx); 
	}
	
	printf("\n");
	 
	
	
	return 0; 
}
