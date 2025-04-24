/* #include <stdio.h>
//ineratif

int faktorial (int n){
	int hasil = n; 
	
	for(int i=2; i<n; i++){
		hasil*=i; 
	}
		return hasil ; 
}
int main (){
	int hasil = faktorial(3); 
	printf("%d", hasil); 
	
	return 0; 
}
*/

/*#include <stdio.h>
//rekursi 
int recursiveFaktorial(int n){
	if(n==1){
		return 1; 
	}
	if(n==0){
		return 1; 
	}
	return n*recursiveFaktorial(n-1); 
}

int main(){
	int hasil  = recursiveFaktorial(5); 
	printf("%d", hasil); 
	return 0; 
}
*/

//fibbonasi 

/*#include <stdio.h>

int iterFibo(int n){
	int a = 0; 
	int b  = 1; 
	int c; 
	
	if(n==1){
		return a; 
	}
	
	for(int i=2; i<n; i++){
		c = a+b; 
		a=b; 
		b=c; 
	}
	return b; 
}

int main (){
	int hasil = iterFibo(9); 
	printf("%d", hasil);
	return 0;
}*/

/*#include <stdio.h>


int rekursiFibo(int n){
	if(n==1){
		return 0;  
	}
	if(n==2){
		return 1; 
	}
	return rekursiFibo(n-1) + rekursiFibo(n-2); //n = (n-1)+(n-2)
}

int main (){
	int hasil = rekursiFibo(9); 
	
	printf("%d", hasil);
	
	return 0; 
}*/

#include <stdio.h>
//rekursi 

int a = 0; 
int b = 1; 

void fibo(int n){
	if(n<3){
		return; 
	}
	int c = a+b; 
	a = b; 
	b = c; 
	printf("%d", c); 
	
	return fibo(n-1); 
}
void printFibo(int n){
	if(n<1){
		printf("ga ada\n"); 
		return; 
	}
	if(n==1){
		printf("%d", 0); 
	}
	else if(n==2){
		printf("%d %d", 0, 1); 
	}
	else {
		printf("%d %d", 0, 1); 
		fibo(n); 
	}
}

int main (){
	int n =5;
	printFibo(n); 
	
	return 0; 
}
