#include<stdio.h> 
#include<string.h>

int main(){
	FILE *fp = fopen("testdata.in", "r"); 
	int n; //jumlahData
	fscanf(fp, "%d\n", &n); 

	char nama[n][1001]; 
	char pohon[n][1001]; 
	for(int i=0; i<n; i++){
		fscanf(fp,"%[^#]#%[^\n]\n", &nama[i], &pohon[i]);	
	}

	int t; //testCase
	fscanf(fp, "%d\n", &t); 

	char search[1001]; 
	for(int i=0; i<t; i++){
		fscanf(fp, "%s", search); 
		
		int flag = -1; 
		for(int j=0; j<n; j++){
			if(strcmp(nama[j],search)==0){
				flag =j; 
				break; 
			}
		}
		if(flag == -1){
			printf("Case #%d: N/A\n", i+1); 
		} else{
			printf("Case #%d: %s\n", i+1, pohon[flag]);
		}
	}
	
	fclose(fp); 
	return 0; 
}