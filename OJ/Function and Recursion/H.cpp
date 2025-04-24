#include <stdio.h>

int fiboString(int n, char s0, char s1){
	if(n==0){
		printf("%c", s0); 
		return 0; 
	}
	
	if(n==1){
		printf("%c", s1); 
		return 1; 
	}
	return fiboString(n-1, s0, s1)+fiboString(n-2, s0, s1);
}

int main(){
	int T, n; 
	char s0, s1; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++){
		scanf("%d %c %c", &n, &s0, &s1); 
		 
		printf("Case #%d: ", i); 
		fiboString(n, s0, s1); 
		printf("\n"); 
	}
	return 0; 
}
