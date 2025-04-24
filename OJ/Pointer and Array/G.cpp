#include <stdio.h>

int main (){
	int T; 
	int N; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++){
		scanf("%d", &N); 
		
		long long int x[N]; 
		long long int y[N]; 
		
		for(int j=0; j<N; j++){
			scanf("%lld", &x[j]); 
		}
		for(int j=0; j<N; j++){
			scanf("%lld", &y[j]); 
		}
		
		int count = 0; 
		for(int j=0; j<N; j++){
			if(x[j]<y[j]){
				count++; 
			}
		}
		
		printf("Case #%d: %d\n", i, count); 
	}
	
	return 0; 
}
