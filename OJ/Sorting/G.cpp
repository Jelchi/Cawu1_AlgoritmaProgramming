#include <stdio.h> 

void swap(int *a, int *b){
    int temp =*a; 
    *a = *b; 
    *b = temp; 
}

void sorting(int n, int *a){
    int count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(&a[j], &a[j+1]); 
                count
            }
        }
    }
}

int main(){
    int t; //testcase
    scanf("%d", &t); 
    getchar(); 

    int n, x; 
    int a[101]; 
    for(int i=0; i<t; i++){
        scanf("%d %d", &n, &x); 
        getchar(); 

        for(int j=0; j<n; j++){
            scanf("%d", &a[i]); 
            getchar(); 
        } 

        sorting(n,a); 
        for(int i=0; )
    }
    return 0; 
}