#include <stdio.h>

int f(int n){
	if(n == 1){
		return 1; 
	}else if(n % 2 == 1){
		return f(n-1) + f(n+1); 
	}else {
		return f(n/2); 
	}
}


int main (){
	int T;
	long long int n;  
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++){
		scanf("%lld", &n); 
		
		int y = f(n);
		printf("Case #%d: %d\n", i, y);  
	}
	
	return 0; 
}
