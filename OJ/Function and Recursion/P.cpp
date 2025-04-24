#include <stdio.h>

int oldjobonaci(int n){
	if(n==0){
		return 0; 
	}
	
	if(n==1){
		return 1; 
	}
	
	if(n%2 == 1){
		return 1; 
	}
	return oldjobonaci(n-1)+oldjobonaci(n-2); 
} 

int main(){
	int n; 
	scanf("%d", &n); 
	
	int result = oldjobonaci(n); 
	printf("%d\n", result); 
	
	return 0; 
}
