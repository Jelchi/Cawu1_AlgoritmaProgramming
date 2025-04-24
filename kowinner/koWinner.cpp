#include <stdio.h>
#include <string.h>
int main(){
	// Sediakan Pointer ke File 
	//harus / dan nama file nambah sendiri 
	char path[] = "C:/Users/jelvi/OneDrive/Documents/PPTI/DevC/www.txt"; 
	
	//open file in read-mode  
	FILE* adsdFile = fopen(path,"r"); 
	
	/*Access type ada 3: 
	r =  read - membaca file 
	w = write - menulis file - over write
	a = append - menambahkan isi file (nambah di belakang)*/
	
	//checks if file is openable 
//	if(adsdFile == NULL){
//		printf("Fille ga iso dibuka\n"); 
//		return 0; 
//		
//		//break & continue only for looping(for, while, do..while) 
//	}else{
//		printf("bisa di buka\n"); 
//	}
//	printf("\n"); 
	
	/*function 
	fscanf
	fgets
	*/
	
	//read file with fscanf
//	char text[1001], text2[1001]; 
//	fscanf(adsdFile, "%[^\n] %[^\n]", &text, &text2); fgetc(adsdFile); 
//	printf("%s\n%s\n", text, text2); 
	
	//fgetc(adsdFile);  == getchar(); 
	
	//feof- bakal detect klo file itu akan habis 
//	if(feof(adsdFile)){
//		printf("Habis"); 
//	}else{
//		printf("belum habis"); 
//	}

	//loop until eof
//	char text[1001]; 
//	while(feof(adsdFile)==0){
//		fscanf(adsdFile, "%[^\n]", &text); 
//		fgetc(adsdFile); 
//		
//		printf("%s\n", text); 
//	}	
	
	//write ("w") and appendmode ("a")
//	FILE* adsdFile = fopen(path,"w"); 
//	
//	char name[]= "jelvis"; 
//	int age = 23; 
//	fprintf(adsdFile, "Nama gw %s dan umur saya %d\n", name, age); 
//	
//	fprintf(adsdFile, "senang bertemu dengan anda\n"); 
return 0; 
}
