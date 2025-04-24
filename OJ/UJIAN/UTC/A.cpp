/*
pseudocode
 
cara 1: 

Start
	input s
	
	for i = 0 to panjang s 
		if s to i >= 'A' AND s to i <= 'Z' Then 
			s to i += 32 
		else if s to i >= 'a' AND s to i <= 'z' Then 
			s to i -= 32
		End if 	
	i++
	End for
	
	print s		
End
*/
 
//cara ascii
#include<stdio.h>
#include<string.h>

int main (){
	char s[101]; 
	scanf("%[^\n]", &s); 
	
	for(int i=0; i<strlen(s); i++){
		if(s == " "){
			continue; 
		}
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32; 
		}else if(s[i] >= 'a' && s[i] <='z'){
			s[i] -= 32; 
		}
	}
	printf("%s\n", s); 
	return 0; 
} 

// cara libary function  
/*#include <stdio.h>
#include <string.h>
#include <ctype.h> //libary nya alphabet 

int main(){
	char s[101]; 
	scanf("%[^\n]", &s); 
	
	for(int i=0; i<strlen(s); i++){
		if(islower(s[i])){
			s[i] = toupper(s[i]); 
		}else if(isupper(s[i])) {
			s[i] = tolower(s[i]); 
		}
	}
	printf("%s\n", s); 
	return 0; 
}*/



