//b
//#include<stdio.h> 

/*
1. Sorting ASC
2. starting form idx 0
3. add to next idx. if addition <= limit, continue else return
4. continue to next idx
*/
/*
void swap(int *besar, int *kecil){
    int temp = *besar; 
    *besar = *kecil; 
    *kecil = temp; 
}

void bubbleSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(&arr[i], &arr[j]); 
            }
        }
    }
}

int main (){
    int s;  //number of seat
    int n; //Number of group 

    scanf("%d", &s); 
    scanf("%d", &n);  

    int a[n]; //number of people 
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]); 
    }

    bubbleSort(a,n); 

    int idx = 0; 
    int sum=0; 
    do{
        sum= sum + a[idx]; 
        if(sum <=s){
            idx++; 
        } else {
            break; 
        }
    }while(sum < s); 

    printf("%d\n", idx); 

    return 0; 
}*/ 
 //a
/*#include <stdio.h> 
#include <string.h> 

int search(char arr[][256], int len, char *toSearch){
    for(int i=0; i<len; i++){
        if(strcmp(toSearch, arr[i])==0){
            return i; 
        }
    }
    return -1; 
}

int main(){
    int n; //number of contact 
    scanf("%d", &n); getchar(); 

    char phoneNumber[101][256]; 
    char name[101][256]; 

    for(int i=0; i< n; i++){
        scanf("%s %[^\n]", &phoneNumber[i], &name[i]); getchar(); 
    }

    char from[256]; 
    scanf("%s", &from); getchar(); 
    char to[256]; 
    scanf("%s", &to); getchar(); 

    int resultIdx = search(phoneNumber, n,from); 
    int toIdx = search(phoneNumber, n, to); 

    printf("%s is calling %s\n", name[resultIdx], name[toIdx]); 

    return 0; 
}*/ 

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b){
	char temp[101];
  	strcpy(temp, a);
  	strcpy(a, b);
  	strcpy(b, temp);
}

void sorting(char arr[][1001], int n){
	for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strcmp(arr[j], arr[j + 1]) > 0) {
        swap(arr[j], arr[j+1]);
      }
    }
  }
}


int main(){
	int n; 
	scanf("%d", &n); 
	
	char arr[n][1001]; 
	for(int i=0; i<n; i++){
		scanf("%s", &arr[i]); 
	}
	
		sorting(arr, n); 	
	
	for(int i=0; i<n; i++){
		printf("%s\n", arr[i]); 
	} 
	
	return 0; 
}