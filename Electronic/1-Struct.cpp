/*
	Make a struct with the name `Electronic` with the data:
		- Electronic ID ( example: ETC410 )
		- Electronic Name ( example: Monitor 2 Inch )
		- Electronic Price ( example: 2000000 )
	
	After you made the struct, try to ask user for input ( id, name, price )
	then display the data.
*/

#include <stdio.h>
#include <string.h>

//struct biasa

/*struct electronic{
	char id[1001]; 
	char name[1001]; 
	int price; 
};

int main() {
	struct electronic a; 
	scanf("%s", &a.id); 
	getchar(); 
	
	scanf("%[^\n]", &a.name); 
	getchar();
	
	scanf("%d", &a.price); 
	getchar(); 
	
	return 0;
}*/

// typedef struct 

typedef struct electronic{
	char id[1001]; 
	char name[1001]; 
	int price; 
}data;

int main(){
	data a; 
	scanf("%s", &a.id);
	getchar(); 
	
	scanf("%[^\n]", &a.name); 
	getchar(); 
	
	scanf("%d", &a.price); 
	getchar(); 
	
	return 0; 
}
