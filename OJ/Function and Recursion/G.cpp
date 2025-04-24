#include <stdio.h>
#include <string.h>

void polindorm(char *s){
	int length = strlen(s); 
	char reverse[1001]; 
	
	for(int i=0; i<length; i++){
		reverse[i] = s[length-i-1]; 
	}
	
	reverse[length] = '\0';
	if(strcmp(reverse, s)==0){
		printf("yes"); 
	}else {
		printf("no"); 
	}
}

int main (){
	int T; 
	char s[1001]; 
	scanf("%d", &T); 
	getchar();
	
	for(int i=1; i<=T; i++){
		scanf("%s", s); 
		getchar(); 
		
		printf("Case #%d: ", i);  
		polindorm(s);
		printf("\n");
	}
	
	return 0; 
}
