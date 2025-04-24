#include <stdio.h> 

void sum_tree(int n, int *a, int sum, int idx){
	int result = a[idx]; 

	if(idx*2+1 < n){
		sum_tree(n, a, sum+result, idx*2+1); 
	}

	if(idx*2+1+1 < n){
		sum_tree(n, a, sum+result, idx*2+1+1); 
	}

	if (idx*2+1 >= n){
		printf("%d\n", sum+result); 
	}
} 

int main(){
	int t, n; 
	scanf("%d", &t); 

	for(int i=1; i<=t; i++){
		scanf("%d", &n); getchar(); 

		int a[n+1]; 
		for(int j=0; j<n; j++){
			scanf("%d", &a[j]); getchar(); 
		}

		printf("Case #%d:\n", i); 
		sum_tree(n, a, 0, 0); 
	}
	return 0; 
}