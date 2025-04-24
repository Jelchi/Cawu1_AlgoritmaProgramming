#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

struct Assistant{
 char id[10];
 char name[255];
 char initial[10];
 int semester; 
};

Assistant listAst[MAX];
int size = 0;
void mainMenu();

void addAssistant(){
 char name[255];
 char initial[10];
 int semester;
 do{
  printf("Please enter your name : ");
  scanf("%[^\n]", &name); getchar();
  if(strlen(name) < 5 || strlen(name) > 10){
   printf("Please enter your name correctly\n");
  }
 }while (strlen(name) < 5 || strlen(name) > 10);
 
 do{
  printf("Please enter your initial : ");
  scanf("%s", &initial); getchar();
  //misal ML23-1
  if(strlen(initial) != 6){
   printf("Please enter your initial correctly\n"); 
  } else if (strlen(initial) == 6){
   break;
  }
 } while(true); //dia bakalan selalu ngelooping (tapi saat mengulang dia akan ketemu inisial yang benar)
 
 
 do{
  printf("Please enter your semester : ");
  scanf("%d", &semester); getchar();
 } while (semester < 0 || semester > 10);
 
 Assistant a; 
 a.semester = semester;
 strcpy(a.name, name);
 strcpy(a.initial, initial);
 int ctr = 0;
 do{
  ctr = 0;
  sprintf(a.id, "AST%03d", rand()%1000);
  for(int i = 0; i < size; i++){
   if(strcmp(listAst[i].id, a.id) == 0){
    ctr++;
    break;
   }
  }
 } while (ctr != 0);
// size++;
// sprintf(a.id, "AST%03d", rand()%1000);
 listAst[size++] = a;
 mainMenu();
}

void updateAssistant(){
 for(int i =0; i < size; i++){
  printf("%s, %s, %s, %d\n", listAst[i].id, listAst[i].name, listAst[i].initial, listAst[i].semester);
 }
 char idUpdate[10];
 printf("Id to be updated: ");
 scanf("%s", &idUpdate); getchar();
 
 int idx = -1;
 for(int i = 0; i < size; i++){
  if(strcmp(listAst[i].id, idUpdate) == 0){
   idx = i;
   break;
  }
 }
 do{
  printf("Please enter your name : ");
  scanf("%[^\n]", &listAst[idx].name); getchar();
  if(strlen(listAst[idx].name) < 5 || strlen(listAst[idx].name) > 10){
   printf("Please enter your name correctly\n");
  }
 }while (strlen(listAst[idx].name) < 5 || strlen(listAst[idx].name) > 10);
 
 do{
  printf("Please enter your initial : ");
  scanf("%s", &listAst[idx].initial); getchar();
  //misal ML23-1
  if(strlen(listAst[idx].initial) != 6){
   printf("Please enter your initial correctly\n"); 
  } else if (strlen(listAst[idx].initial) == 6){
   break;
  }
 } while(true); //dia bakalan selalu ngelooping (tapi saat mengulang dia akan ketemu inisial yang benar)
 
 do{
  printf("Please enter your semester : ");
  scanf("%d", &listAst[idx].semester); getchar();
 } while (listAst[idx].semester < 0 || listAst[idx].semester > 10);
 
 mainMenu();
}

void mainMenu(){
 int ch;
 do{
  system("cls"); //biar tampilannya lebih rapi
  printf("Bluejackets");
  printf("====================\n");
  //read
//  for(int i = size-6; i < size; i++){
//   if(i >= 0){
//   printf("%s, %s, %s, %d\n", listAst[i].id, listAst[i].name, listAst[i].initial, listAst[i].semester);
//   }
//  }
 if(size > 0){
  for(int i = size-1; i >= size-6; i--){
   if(i >= 0){
    printf("%s, %s, %s, %d\n", listAst[i].id, listAst[i].name, listAst[i].initial, listAst[i].semester);
   }
  }
 }
  puts("1. Add Assistant");
  puts("2. Update Assistant");
  puts("3. Exit");
  scanf("%d", &ch); getchar();
 } while(ch < 1 || ch > 3);
 if (ch == 1){
  addAssistant();
 } else if (ch == 2){
  updateAssistant();
 }
}

int main(){
 mainMenu();
 return 0;
}
