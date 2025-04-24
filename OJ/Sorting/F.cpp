#include <stdio.h> 
#include <string.h> 

void printArray(int n, char s[][101]){
    for(int i=0; i<n; i++){
        printf("%s\n", s[i]); 
    }
}

void swapT(long long int *a, long long int *b){
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void swapS(char *a, char *b){
    char temp[101]; 
    strcpy(temp, a); 
    strcpy(a,b); 
    strcpy(b, temp); 
}

void sorting(int n, char s[][101], long long int *t){
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){ 
                if(t[j]>t[j+1]){
                    swapT(&t[j], &t[j+1]); 
                    swapS(s[j], s[j+1]); 
                } else {
                    if(t[j] == t[j+1]){
                        if(strcmp(s[j], s[j+1])>0){
                            swapT(&t[j], &t[j+1]); 
                            swapS(s[j], s[j+1]);
                        }
                    }
                }
            }
        }
}

int main(){
    int n; 
    scanf("%d", &n);
    getchar();  

    char s[n][101]; 
    long long int t[n]; 
    for(int i=0; i<n; i++){
        scanf("%s %lld", &s[i], &t[i]); 
        getchar(); 
    }
    sorting(n, s,t); 
    printArray(n, s); 
    return 0; 
}