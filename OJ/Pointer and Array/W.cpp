#include <stdio.h>

int faktor_keren(int *a, int N){
	int cnt = 0;
	int flag = 1; 
		 
	for (int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(flag == 0){
				flag = 1; 
				break; 
			}
			for(int k=0; k<N; k++){
				if(a[i]== a[j]+a[k] && i != j && i != k && j!=k){
					cnt++; 
					flag = 0; 
					break; 
				}
			}
		}
	}
	return cnt; 
	}

int main (){
	int T; //test case 
	int N; 
	scanf("%d", &T); 
	
	for(int i=1; i<=T; i++){
		scanf("%d", &N); 
		
		int a[N]; 
		for(int j=0; j<N; j++){
			scanf("%d", &a[j]); 
		}
		int result = faktor_keren(a, N); 
		printf("Case #%d: %d\n", i, result); 
	} 
	return 0; 
}
