#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 

struct route{
    char method[101]; 
    char endpoint[101]; 
    char controllerName[101]; 
    char functionName[101]; 
}; 

struct route a; 

route routeList[101]; 
int counter = 0; 

void registerRoute(){
    do{
        printf("Request method[GET | POST]: "); 
        scanf("%s", &a.method); 
        getchar(); 
    }while(strcmp(a.method, "GET") && strcmp(a.method, "POST")); 

    do{
        printf("Route path [begins with \"/\" | contains only alphabets and \"/\"]: "); 
        scanf("%s", &a.endpoint); 
        getchar();

        int len= strlen(a.endpoint); 
        if(a.endpoint[0] == '/'){
            int flagAlphabet = 1; 
            for(int i=0; i<len; i++){
                if(!isalpha(a.endpoint[i]) && a.endpoint[i] != '/'){
                    flagAlphabet = 0; 
                }
            }

            if(flagAlphabet == 1){
                break; 
            }
        }
        
    }while(1); 

    do{
        printf("Controller name [end with \"Controller\"]: "); 
        scanf("%s", &a.controllerName); 
        getchar();

        int sizeInput = strlen(a.controllerName); 
        int sizeKeyWord = strlen("Controller");

        if(sizeInput > sizeKeyWord && strcmp(a.controllerName+sizeInput-sizeKeyWord, "Controller")==0){
            break; 
        }
    }while(1);

    do{
        printf("Function name [must not be empty]: "); 
        scanf("%s", &a.functionName); 
        getchar(); 
    }while(strlen(a.functionName) == 0);

    routeList[counter] = a; 
    counter++; 

    printf("Insert success, "); 
    system("pause"); 
    system("cls"); 
} 

void swap(route *a, route *b){
    route temp = *a; 
    *a = *b; 
    *b =temp;
}

void quickSort(route arr[], int left, int right){
    if(left >= right){
        return; 
    }
    int pivot = left-1; 

    for(int i=left; i<right; i++){
        if(arr[i].method < arr[right].method || arr[i].method == arr[right].method && strcmp(arr[i].endpoint,arr[right].endpoint)<0){
            pivot++; 
            swap(&arr[i], &arr[pivot]); 
        }
    }
    swap(&arr[right], &arr[pivot+1]); 

    quickSort(arr, left, pivot); 
    quickSort(arr, pivot+2, right); 
}

void noFilter(){
    quickSort(routeList, 0, counter-1); 
    puts("========================================================================================="); 
    printf("| %16s | %16s | %16s | %16s|\n", "Method", "Endpoint", "Controller", "Function"); 
    puts("========================================================================================="); 

    for(int i=0; i<counter; i++){
        printf("| %16s | %16s | %16s | %16s|\n", routeList[i].method, routeList[i].endpoint, routeList[i].controllerName, routeList[i].functionName); 
    }

    puts("========================================================================================="); 

}

void filterRequest(){
    char sM[101]; 
    do{
        printf("Request method[GET | POST]: "); 
        scanf("%s", &sM); 
        getchar(); 
    }while(strcmp(sM, "GET") && strcmp(sM, "POST"));

    quickSort(routeList, 0, counter-1);

    puts("========================================================================================="); 
    printf("| %16s | %16s | %16s | %16s|\n", "Method", "Endpoint", "Controller", "Function"); 
    puts("========================================================================================="); 

    for(int i=0; i<counter; i++){
        if(strcmp(routeList[i].method, sM)==0){
            printf("| %16s | %16s | %16s | %16s|\n", routeList[i].method, routeList[i].endpoint, routeList[i].controllerName, routeList[i].functionName); 
        }
    }

    puts("========================================================================================="); 


}

void filterPath(){
    char sPath[101]; 
    do{
        printf("Seacrh keyword[must not be empty]: "); 
        scanf("%s", &sPath); 
        getchar(); 
    }while(strlen(sPath) == 0);

    quickSort(routeList, 0, counter-1);

    puts("========================================================================================="); 
    printf("| %16s | %16s | %16s | %16s|\n", "Method", "Endpoint", "Controller", "Function"); 
    puts("========================================================================================="); 

    for(int i=0; i<counter; i++){
        if(strstr(routeList[i].endpoint, sPath)){
            printf("| %16s | %16s | %16s | %16s|\n", routeList[i].method, routeList[i].endpoint, routeList[i].controllerName, routeList[i].functionName); 
        }
    }

    puts("========================================================================================="); 


}

void showRoute(){
    if(counter == 0){
        puts("No registered routes..."); 
    } else {
        int option; 
        do{
            puts("1. No filter"); 
            puts("2. Filter by request methods"); 
            puts("3. Filter contains specified path"); 
            puts("0. cancel"); 
            printf("Choose >> "); 
            scanf("%d", &option); 
            getchar(); 

            switch(option){
                case 1: 
                    noFilter(); 
                    break; 

                case 2:
                    filterRequest(); 
                    break; 
                
                case 3: 
                    filterPath(); 
                    break; 

                case 0: 
                    break; 

                default : 
                    break; 
            }
        }while(option !=0); 
    }
    system("pause"); 
}

void deleteRoute(){
    char dM[101]; 
    char dP[101]; 

    do{
        printf("Enter method and path [must not be empty]: "); 
        scanf("%s %s", &dM , &dP); 
        getchar(); 

    }while(strcmp(a.method, "GET") && strcmp(a.method, "POST") && strlen(dP) ==0);

    int idxDelete = -1;
    for(int i=0; i<counter ;i++){
        if(strcmp(routeList[i].method, dM)==0 && strcmp(routeList[i].endpoint, dP)==0){
            idxDelete = i;
            break; 
        }
    }

    if(idxDelete == -1){
        printf("Not founded\n"); 
    } else{
        for(int i=idxDelete; i<counter-1; i++){
            routeList[i] = routeList[i+1];
        }
        counter --; 
        printf("Delete data successfull\n"); 
    }

    system("pause"); 
}

void exitRoute(){
    FILE *fp = fopen("routes.cfg", "w"); 

    for(int i=0; i<counter; i++){
        fprintf(fp, "%s#%s#%s#%s\n", routeList[i].method, routeList[i].endpoint, routeList[i].controllerName, routeList[i].functionName);        
    }
    fclose(fp); 
}

void mainMenu(){
    int opt; 
    do{
        puts("Web Routes Registry"); 
        puts("======================"); 
        puts("1. Register new routes"); 
        puts("2. Show all routes"); 
        puts("3. Delete specific route"); 
        puts("4. Exit"); 
        printf("Choose >> "); 
        scanf("%d", &opt); 
        getchar(); 

        system("cls"); 
        switch(opt){
            case 1: 
                registerRoute(); 
                break; 
            
            case 2: 
                showRoute(); 
                break; 
            
            case 3:
                deleteRoute(); 
                break; 
            
            case 4: 
                exitRoute(); 
                break; 
            
            default: 
                break; 
        }
    } while(opt != 4); 
}

int main(){
	// routeList[counter++] = (route) { "GET", "/", "HomeController", "__invoke" };
	// routeList[counter++] = (route) { "GET", "/product", "ProductController", "getAllProducts" };
	// routeList[counter++] = (route) { "GET", "/user", "UserController", "getAllUsers" };
	// routeList[counter++] = (route) { "POST", "/product", "ProductController", "insertProduct" };
	// routeList[counter++] = (route) { "POST", "/user", "UserController", "insertNewUser"};

    FILE *fp = fopen("routes.cfg", "r"); 
    if(fp != 0){
        while(!feof(fp)){
            fscanf(fp, "%[^#]#%[^#]#%[^#]#%[^\n]\n", routeList[counter].method,routeList[counter].endpoint, routeList[counter].controllerName, routeList[counter].functionName ); 
            counter++; 
        }
    }
    fclose(fp); 
    mainMenu(); 

    return 0; 
}