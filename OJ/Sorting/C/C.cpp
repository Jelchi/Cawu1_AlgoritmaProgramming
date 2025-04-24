#include <stdio.h> 
#include <string.h> 

void printSorting(int n, char r[][101], char m[][101]){
    for(int i=0; i<n; i++){
        printf("%s %s\n", r[i], m[i]); 
    }
}

void swap(char *a, char *b){
    char temp[101]; 
    strcpy(temp, a); 
    strcpy(a,b);
    strcpy(b,temp); 
}

void sorting(int n, char r[][101], char m[][101]){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(strcmp(r[j], r[j+1])>0){
                swap(r[j], r[j+1]); 
                swap(m[j], m[j+1]); 
            }
        }
    }
}

int main(){
    FILE *fp = fopen("testdata.in", "r"); 
    int n; //jumlah siswa
    fscanf(fp,"%d\n", &n); 

    char r[n][101]; //id
    char m[n][101]; //name

    for(int i=0; i<n; i++){
        fscanf(fp, "%s %s", &r[i], &m[i]); 
    }

    sorting(n, r, m); 
    printSorting(n,r,m); 
    fclose(fp); 
    return 0; 
}