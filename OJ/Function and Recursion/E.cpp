#include <stdio.h>

int sumOfTree(int N, int a[], int index){
	if(index == N-1){
		return a[index]; 
	}else {
		return a[index]+sumOfTree(N, a, index+1); 
	}
}

int main (){
	int T, N; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++){
		scanf("%d", &N); 
		
		int a[N]; 
		for(int j=0; j<N; j++){
			scanf("%d", &a[j]); 
		}
		int total  = sumOfTree(N, a, 0); 
		printf("Case #%d: %d\n", i, total); 
	}
	
	return 0; 
}
