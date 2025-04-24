#include <stdio.h>

int ackremannFunction(int m, int n){
	if(m==0){
		return n+1; 
	}
	else if(n==0 && m>0){
		return ackremannFunction(m-1, 1); 
	} else if(m>0 && n>0) {
		return ackremannFunction(m-1,ackremannFunction(m, n-1)); 
	}
} 

int main(){
	int m, n;          
	scanf("%d %d", &m, &n); 
	
	int x = ackremannFunction(m,n);
	printf("result: %d\n", x); 
	
	return 0; 
}
