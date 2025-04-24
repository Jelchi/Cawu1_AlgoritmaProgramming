#include<stdio.h>

int main (){
	int x, y,z; 
	scanf("%d %d %d", &x, &y, &z); 
	
	int a  = 5000 * x; 
	int b = 6000 * y; 
	int c = 7000 * z; 
	
	if(a > b && a > c){
		if(a==b && a==c){
			printf("Cancel"); 
		} else {
			printf("%d Apel", a);
		}
	}
	else if(b > a && b > c){
		if(b==a && b==c){
			printf("Cancel"); 
		}else{
			printf("%d Jeruk", b);	
		}
	}
	else if(c > b && c > a){
		if(c==a && c==b){
			printf("Cancel"); 
		}else {
			printf("%d Nanas", c); 
		}
	}
	printf("\n"); 
	return 0; 
}
