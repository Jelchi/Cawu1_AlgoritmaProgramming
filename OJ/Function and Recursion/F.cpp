#include <stdio.h>
#include <string.h>

void reverse(char *s){
	int length = strlen(s); 
	for(int i = length-1; i>=0; i--){
		printf("%c", s[i]); 
	}
}

int main (){
	int T; 
	char s[1001];
	scanf("%d", &T);
	
	getchar(); 
	for(int i=1; i<=T; i++){
		//fgets(s,101,stdin); 
		scanf("%[^\n]", s); 
		getchar();  
		
		printf("Case #%d: ", i); 		
		reverse(s); 
		printf("\n");	
	} 	
	
	
	return 0; 
}
