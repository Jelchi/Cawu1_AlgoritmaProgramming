#include <stdio.h> 

int main (){
	int t; //test case
	int n; 
	long long int a;
	scanf("%d", &t); 
	getchar(); 

	for(int i=0; i<t; i++){
		scanf("%d", &n); 
		getchar(); 

		for(int i=0; i<n; i++){
			scanf("%lld", &a); 
			getchar(); 
		}
	}

	return 0; 
}