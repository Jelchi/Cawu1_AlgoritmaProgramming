#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct -> structure 
struct student {
	char name [1001]; 
	int age; 
	float gpa; 
};

//char listName[35][101]; 
//int listAge [35]; 
//float listGpa [35]; 

student listStudent[35]; 


int main (){
//	char name [] = "Michael"; 
//	int age = 20; 
//	float gpa = 3.4; 
//	// listName [0] = name; 
//	strcpy(listName [0], name); 
//	listAge [0] = age; 
//	listGpa[0] = gpa; 
//	
//	printf("Hello my name is %s, My ages is %d, my GPA is %f", listName, listAge, listGpa); 
	
	student felix; 
	felix.age = 18; 
	strcpy(felix.name, "Feix Salim"); 
	felix.gpa = 4.00; 
	listStudent[0] = felix; 
	
	printf("Hello my name is %s, My ages is %d, my GPA is %f", listStudent[0].name, listStudent[0].age, listStudent[0].gpa);
	
	return 0; 
}
