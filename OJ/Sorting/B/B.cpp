#include <stdio.h> 
#include <string.h> 

void swap(char *a, char *b){
    char temp[101]; 
    strcpy(temp, a); 
    strcpy(a,b); 
    strcpy(b, temp); 
} 

void sorting(int n, char m[][101], char r[][101]){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(strcmp(m[j], m[j+1])>0){
                swap(m[j], m[j+1]);
                swap(r[j], r[j+1]);  
            }
        }
    }
}

int main (){
    FILE *fp = fopen("testdata.in", "r"); 
    int n; //jumlah tanaman
    fscanf(fp, "%d\n", &n);

    char r[n][101]; 
    char m[n][101]; 
    for(int i=0; i<n; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", &r[i], &m[i]);
    } 

    sorting(n, m, r); 
    //print hasil sorting
    for(int i=0; i<n; i++){
        printf("%s %s\n", r[i], m[i]); 
    }

    fclose(fp); 
    return 0; 
}