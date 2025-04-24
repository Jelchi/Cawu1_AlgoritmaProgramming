#include <stdio.h>
#include <string.h>

int main (){
	char s[101]; 
	scanf("%[^\n]", &s);
	
	int idx = 0; 
	for(int i=0; i<=strlen(s); i++){
		// mengecek spasi dan huruf terakhir. 
		if(s[i] == ' ' || s[i] == '\0'){ 
			for(int j = i-1; j>=idx; j--){ //buat reverse
				printf("%c", s[j]); 
			}
			
			if(s[i] == ' '){
				printf(" "); 
			}
			idx = i+1; 
		}
	}
	printf("\n"); 
	return 0; 
}

