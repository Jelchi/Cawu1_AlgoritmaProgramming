#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

struct Node{
	char name[100]; 
	int rating; 
	Node *left; 
	Node *right; 
}; 

Node * root = NULL; 

Node *createNode(const char *name, int rating){
	Node * newNode =(Node*)malloc(sizeof(Node)); 
	strcpy(newNode->name, name); 
	newNode->rating = rating; 
	newNode->left = NULL; 
	newNode->right = NULL; 

	return newNode; 
}

Node *insert(Node*root, const char *name, int rating){
	if(root == NULL){
		return createNode(name, rating); 
	}

	if(strcmp(name, root->name)!=0){
		if(strcmp(name, root->name)<0){
			root->left = insert(root->left, name, rating); 
		} else if(strcmp(name, root->name)>0){
			root->right = insert(root->right, name, rating); 
		}
	}
	return root; 
}

Node *findMax(Node*root){
	root = root->left; 
	while(root->right != NULL){
		root = root->right; 
	}
	return root; 
}

Node *findMin(Node*root){
	root = root->right; 
	while(root->left != NULL){
		root = root->left; 
	}
	return root; 
}

Node *deleteData(Node *root, const char *name){
	if(!root){
		return root; 
	}

	    if(strcmp(root->name, name)>0){
        root->left = deleteData(root->left, name); 
    } else if(strcmp(root->name, name)<0){
        root->right = deleteData(root->right, name); 
    } else if(strcmp(root->name, name) == 0){
        if(root->left == NULL && root->right == NULL){
            free(root); 
            root = NULL; 
        } else if(root->left == NULL){
            Node *temp =  root->right; 
            free(root); 
            return temp; 
        } else if(root->right == NULL){
            Node * temp = root->left; 
            free(root); 
            return temp; 
        } else {
            Node * temp = findMax(root); 
            strcpy(root->name,temp->name); 
            root->rating = temp->rating; 
            root->left = deleteData(root->left, temp->name); 
        }
    }
    return root;
}

void validasiInsertData(){
	char name[101]; 
	int rating; 

	do{
		printf("Input name of the game [1-100 characters]: "); 
		scanf("%[^\n]", &name); 
		getchar(); 
	} while(strlen(name)<1 || strlen(name)>100); 

	do{
		printf("Input rating of the game[1-10]: "); 
		scanf("%d", &rating); 
		getchar(); 
	}while(rating<1 || rating >10); 
	
	root = insert(root, name, rating); 
}

void display(Node *root){
	if(root){
		display(root->left); 
		printf("Name: %s\n", root->name);
		printf("Rating: %d\n", root->rating); 
		display(root->right); 
	}
}

Node * freeTree(Node*root){// untuk bebaskan memory
	if(root == NULL){
		return NULL; 
	}

	root->left = freeTree(root->left); 
	root->right = freeTree(root->right); 
	free(root); 
	return NULL; 
}

void mainMenu(){
	int opt; 
	do{
		puts("BST MR.X RATING MENU"); 
		puts("==============================="); 
		puts("1. Insert"); 
		puts("2. Delete"); 
		puts("3. Display in descending order"); 
		puts("4. Exit");
		printf(">> "); 
		scanf("%d", &opt); 
		getchar(); 

		system("cls"); 

		switch(opt){
			case 1: 
				validasiInsertData(); 
				break; 

			case 2: 
			{
				char key[101]; 
				printf("Input Name: "); 
				scanf("%[^\n]", &key); 
				getchar(); 

				deleteData(root, key); 
				break; 
			}
			
			case 3: 
				display(root); 
				break; 
			
			case 4: 
				root = freeTree(root); 
				puts("Thank You"); 
				system("pause"); 
				break;  
				
			default: 
			puts("Invalid Input"); 
			system("pause"); 
			break; 
		}
		system("cls"); 
	} while(opt != 4); 
}

int main (){
	mainMenu(); 
	return 0; 
}

