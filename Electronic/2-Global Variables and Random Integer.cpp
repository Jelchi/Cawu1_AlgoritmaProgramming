/*
	Make a global variable with the type data `int` and ask for user to input the data.
	After you've asked the data, sum the data by a random number from 0 to 10, and then display the data.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int a; 

void sum(int a, int b){
	printf("%d", a+b); 
}
 
int main() {
	scanf("%d", &a); 
	getchar(); 
	
	srand(time(0)); 
	
	int randomNumber = rand() %10; 
	printf("%d\n", randomNumber); 
	sum(a, randomNumber); 
	
	return 0;
}
