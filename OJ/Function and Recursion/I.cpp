#include<stdio.h>

int count = 0; 

int fibo(int n){
	if(n==0){
		count++; 
		return 0; 
	}
	
	if(n==1){
		count++; 
		return 1; 
	}else{
		count++; 
	}
	
	return fibo(n-1)+fibo(n-2); 
}

int main(){
	int T, n; //t test case 
	scanf("%d", &T);
	getchar(); 
	
	for(int i=1; i<=T; i++){
		scanf("%d", &n); 
		
		count = 0; 
		fibo(n); 
		printf("Case #%d: %d", i, count); 
		printf("\n"); 
		
	}
	return 0; 
}
