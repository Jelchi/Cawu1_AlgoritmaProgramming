#include<stdio.h>

long long int jojonanci(int n, long long int x, long long int y){
	if(n==0){
		return x; 
	}
	
	if(n==1){
		return y; 
	}
	return jojonanci(n-1, x,y) - jojonanci(n-2, x,y); 
}

int main (){
	int T, n; 
	long long int x, y; 
	scanf("%d", &T); 
	getchar(); 
	
	for(int i=1; i<=T; i++){
		scanf("%d %lld %lld", &n, &x, &y); 
		
		long long int result = jojonanci(n,x,y); 
		printf("Case #%d: %lld", i, result); 
		jojonanci(n,x,y); 
		printf("\n"); 
	}
	
	return 0; 
}
