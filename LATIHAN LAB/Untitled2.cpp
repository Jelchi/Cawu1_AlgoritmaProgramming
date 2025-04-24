#include <stdio.h> 
#include <stdlib.h>
#include<time.h>
#include<string.h>

struct siswa{
	char name[101]; 
	int age; 
};

siswa a [101]; 
int size = 0; 
void mainMenu(); 

void masukanData(){
	char name[101]; 
	int age;
	do{
		system("cls"); 
		printf("Masukan Nama Siswa: "); 
		scanf("%[^\n]", &name); 
		fflush(stdin); 
		
		if(strlen(name) >= 4 || strlen(name)<= 20){
			break; 
		}
	}while(1); 
	
	do{
		system("cls"); 
		printf("Masukan Umur Siswa: "); 
		scanf("%d", &age); 
		fflush(stdin); 
		
		if(age >= 18 || age <= 70){
			break; 
		}
	}while (1); 
	
	// cara 1
//	siswa siswaBaru; 
//	strcpy(siswaBaru.name, name); 
//	siswaBaru.age = age;
//	a[size] = siswaBaru;
	
	// cara 2
//	strcpy(a[size].name, name);
//	a[size].age = age;
	
	size++; 
}
void dataSiswa(){
	system("cls"); 
	printf("Data siswa\n"); 
	
	printf("| %-3s | %-20s | %-4d |\n", "No.", "Name", "Age"); 
	
	for(int i=0; i<size; i++){
		printf("| %-3d | %-20s | %-4d |\n", i+1, a[i].name, a[i].age); 
	}
	char toupdate[101]; 
	printf("name yang mau di update: "); 
	scanf("%s", &toupdate); 
	fflush(stdin); 
	
	char name[101]; 
	int age; 
	do{
		system("cls"); 
		printf("Masukan Nama Siswa: "); 
		scanf("%[^\n]", &name); 
		fflush(stdin); 
		
		if(strlen(name) >= 4 || strlen(name)<= 20){
			break; 
		}
	}while(1); 
	
	do{
		system("cls"); 
		printf("Masukan Umur Siswa: "); 
		scanf("%d", &age);
		
		if(age >= 18 || age <= 70){
			break; 
		}
	}while (1); 
	
	int idx; 
	for(int i= 0; i<size; i++){
		if(strcmp(a[i].name, toupdate)==0){
			idx = i;
			break;
		} 
	}
	siswa siswaBaru; 
	strcpy(siswaBaru.name, name); 
	siswaBaru.age = age;
	a[idx] = siswaBaru; 
	mainMenu(); 
}
void randomData(){
	int angkaAcak = rand() %10; 
	printf("%d\n", angkaAcak); 
	printf("%s", a[angkaAcak].name); 
	system("pause"); 	
}
void hapusSiswa(){
	char todeleta[101]; 
	printf("data yang ingin dihapus: "); 
	scanf("%s", &todeleta); 
	fflush(stdin); 
	
	for(int i=0; i<size; i++){
		if(strcmp(a[i].name, todeleta)){
			for(int j=i; j<size; j++){
				a[j] = a[j+1]; 
			}
			size--;
		} 
		else {
			printf("error\n"); 
		}
	}
	system("pause"); 
}
void mainMenu(){
    int opt; 
    do{
    	system("cls"); 
        puts("Menu Utama"); 
        puts("1. Masukan Siswa"); 
        puts("2. Update Siswa"); 
        puts("3. Random Data"); 
        puts("4. Hapus Siswa"); 
        puts("5. Exit"); 
        printf(">> "); 
        scanf("%d", &opt); 
        fflush(stdin); 
        system("cls"); 

        switch (opt){
            case 1: 
                masukanData(); 
                break; 
            case 2: 
                dataSiswa(); 
                break; 
            case 3:
                randomData(); 
                break; 
            case 4:
                hapusSiswa(); 
                break; 
            case 5: 
                puts("Terimakasih asuu !!!"); 
                break; 
            default: 
                puts("Salah ngentot"); 
                system("pause"); 
                break; 
        }
    }while(opt !=5); 
}
int main (){
	char username[] = "Jelvis"; 
	char password[] = "Anggono"; 
	
	char inputUsername[101]; 
	char inputPassword[101]; 
	
	do{
		system("cls"); 
		printf("Username: "); 
		scanf("%s", &inputUsername); 
		fflush(stdin); 
		
		printf("Password: "); 
		scanf("%s", &inputPassword); 
		fflush(stdin); 
		
	}while (strcmp(username, inputUsername) && strcmp(password, inputUsername)); 
	
    mainMenu(); 
    return 0; 
}
