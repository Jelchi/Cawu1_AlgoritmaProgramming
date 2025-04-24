#include <stdio.h>

int f(int n, int *count){
	if(n%3 == 0 && n != 0){
		*count = *count + 1; 
	}
	
	if(n==0){
		return 1; 
	} else if(n==1){
		return 2; 
	} else if(n%5==0){
		return n*2;
	} else {
		return f(n-1, count)+n+f(n-2, count)+n-2; 	
	}
	
}

int main (){
	int T, n; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++){
		scanf("%d", &n);
		fflush(stdin); 
		
		int count = 0; 
		int result = f(n, &count); 
		printf("Case #%d: %d %d\n", i, result, count); 
	}
	return 0; 
}
