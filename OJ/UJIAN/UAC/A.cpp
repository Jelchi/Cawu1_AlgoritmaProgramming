#include <stdio.h> 

struct 

int main(){
    FILE *fp = fopen("a.in", "r"); 
    int n; 
    fscanf(fp, "%d\n", &n); 


    fclose(fp); 
    return 0; 
}