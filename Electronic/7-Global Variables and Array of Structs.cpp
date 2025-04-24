/*
	Make a struct with the name `Electronic` with the data:
		- Electronic ID ( example: ETC410 )
		- Electronic Name ( example: Monitor 2 Inch )
		- Electronic Price ( example: 2000000 )
		
	Make a global array with the type struct `Electronic` with the size of 3,
	for each indexes inside the array, ask the user to input the value for each index.
	After the array is full, display the array data.
	
	Use function.
*/

#include <stdio.h>
#include <string.h>

struct electronic{
	char id [1001];
	char name[1001];
	int price;  
};

struct electronic a[3]; 

int main() {
	for(int i=0; i<3; i++){
		scanf("%s", &a[i].id); 
		getchar(); 
		
		scanf("%[^\n]", &a[i].name); 
		getchar(); 
		
		scanf("%d", &a[i].price); 
		getchar(); 
	}
	
	for(int i=0; i<3; i++){
		printf("%s\n%s\n%d\n", a[i].id, a[i].name, a[i].price); 
	}
	return 0;
}
