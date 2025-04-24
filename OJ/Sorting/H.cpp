#include <stdio.h> 
#include <string.h> 

void swap(char *a, char *b){
    char temp[101]; 
    strcpy()
}

void sorting(int c, char arr[][101]){
    for(int i=0; i<c; i++){
        for(int j=0; j<c; j++){
            if(strcmp(arr[j], arr[j+1])>0){
                swap(arr[j], arr[j+1]); 
            }
        }
    }
}

int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    getchar(); 

    char arr[r][101]; 
    for(int i=0; i<c; i++){
        scanf("%s", &arr[i]);
        getchar();  
    }

    return 0; 
}