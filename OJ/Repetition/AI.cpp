#include <stdio.h>


int main (){
	int T; 
	long long N; 
	
	scanf("%d", &T); 
	
	for (int i=1; i<=T; i++){
		scanf("%lld", &N); 
		long long arr[N]; 
		for(int j=0; j<N; j++){
			scanf("%lld", &arr[j]); 	
		}
		long long kanan = 0; 
		long long kiri = arr[0]; 
		int kemungkinan =0; 
		
		for(int j=1; j<N; j++){
			kanan+=arr[j]; //sum all
		}
		for(int j=1; j<N; j++){
			if(kiri==kanan){
				kemungkinan = 1; 
				break; 
			}else {
				kiri+=arr[j]; 
				kanan -=arr[j]; 
			}
		}
		if(kemungkinan == 1){
			printf("Case #%d: Yes\n", i); 
		}else{
			printf("Case #%d: No\n", i); 
		}
	}
	return 0; 
}
