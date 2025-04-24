#include<stdio.h>

int fibo(int k, int f0, int f1){
	if(k==0){
		return f0; 
	} 
	
	if (k==1){
		return f1; 
	}
	return fibo(k-1, f0, f1) + fibo(k-2, f0,f1); 
}

int main(){
	int f0, f1, k; 
	
	scanf("%d %d", &f0, &f1); 
	getchar(); 
	scanf("%d", &k); 
	
	int result = fibo(k,f0,f1); 
	
	printf("%d\n ", result); 
	
	return 0; 
}
