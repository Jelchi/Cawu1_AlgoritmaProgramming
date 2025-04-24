#include <stdio.h>

long long int number(long long int a, long long int b){
	if(a==1||a==b){
		return a; 
	}
	
	if(a % 2 == 0){
		return number(a/2, b); 
	}else{
		return number((a*3)+1, b); 
	}
}

int main(){
	int T; 
	long long int a, b; 
	scanf("%d", &T); 
	getchar(); 
	
	for(int i=1; i<=T; i++){
		scanf("%lld %lld", &a, &b); 
		
		int result = number(a,b); 
		// printf("%d", result); // untuk mengecek 
		if(result==b){
			printf("Case #%d: YES", i); 
		} else {
			printf("Case #%d: NO", i); 
		}
		printf("\n"); 
	}
	
	return 0;
}
