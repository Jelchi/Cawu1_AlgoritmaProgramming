#include<stdio.h>

int count = 0; 

long long int operation(long long int n){
	if(n==1){
		count++;
		return 0; 
	} else if(n% 2 == 0){
		count ++; 
		return operation(n/2); 
	}else{
		count++; 
		return operation((n*3)+1); 
	}
}

int main(){
	int T; 
	long long int n; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++){
		scanf("%lld", &n); 
		
		count = 0; 
		operation(n); 
		
		if(count % 2 == 0){
			printf("Case #%d: Jojo\n", i); 
		} else {
			printf("Case #%d: Lili\n", i); 
		}
	}
	return 0; 
}
