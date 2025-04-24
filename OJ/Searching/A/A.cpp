#include <stdio.h> 
#include <string.h> 

int main(){
    FILE *fp =fopen("testdata.in", "r"); 
    int t; //jumlah data 
    fscanf(fp, "%d\n", &t); 

    char p[t][101]; 
    char a[t][101]; 

    for(int i =0; i<t; i++){
        fscanf(fp, "%[^#]#%[^\n]", &p[i], &a[i]); 
    }

    int tc; //jumlah kasus yang diuji 
    fscanf(fp, "%d\n", &tc); 
     
    char search[101]; 
    for(int i=0; i<tc; i++){
        fscanf(fp, "%[^\n]\n", &search); 

        int flag=-1; 
        char toFind = strtok(search, " ");
        for(int j=0; j<tc; j++){
            if(strcmp(p[j], toFind)==0){
                flag =j; 
            }
        }
    }
    return 0;
}