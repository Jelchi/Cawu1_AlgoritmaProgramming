#include <stdio.h>

int main (){
	int n, m; 
	scanf("%d %d", &n, &m); 
	
	double k[n]; 
	for(int i=0; i<n; i++){
		scanf("%d", &k[i]); 
	}
	
	double durationMax = 0; //jumlah durasi 
	for(int i=0; i<n; i++){
		durationMax += k[i]; 
	}
	
	double avg = durationMax / n * m /100; 
	bool valid = true; 
	
	for(int i=0; i<n; i++){
		if(k[i] > avg){
			printf("%d", i+1); 
			
			valid = false; 
			
			if(i !=n-1){
				printf(" "); 
			}
		}
	}
	
	if(valid){
		printf("0"); 
	}
	printf("\n"); 
	
	return 0; 
}

