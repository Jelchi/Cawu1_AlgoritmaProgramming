#include <stdio.h> 
#include <string.h> 

void encryption(int k, char *s){
    int len = strlen(s); 
    for(int i=0; i<len; i++){
        if(s[i] == ' '){
            continue; 
        }
        
        if(s[i] == '0'){
            s[i] = 'O'; 
        } else if(s[i] == '1'){
            s[i] = 'I'; 
        } else if(s[i] == '3'){
            s[i] = 'E'; 
        } else if(s[i] == '4'){
            s[i] = 'A'; 
        } else if(s[i] == '5'){
            s[i] = 'S'; 
        } else if(s[i] == '6'){
            s[i] = 'G'; 
        } else if(s[i] == '7'){
            s[i] = 'T'; 
        } else if(s[i] == '8'){
            s[i] = 'B'; 
        }
        s[i] -= k;
        if(s[i]<'A'){
            s[i]+=26; 
        }
    }
}

int main (){
    FILE *fp = fopen("testdata.in", "r"); 
    int t; //test case
    fscanf(fp, "%d\n", &t);

    int k; //jumlah shifting
    char s[101]; //encryption
    for(int i=0; i<t; i++){
        fscanf(fp,"%d\n", &k); 
        fscanf(fp,"%[^\n]", &s); 

        encryption(k,s); 
        printf("Case #%d: %s\n", i+1, s); 
    }
    return 0; 
}