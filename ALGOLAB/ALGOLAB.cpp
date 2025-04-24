#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char mahasiswa[35][101];
int counter = 0;

void tambahMahasiswa(){
    system("cls");
    fflush(stdin);
    printf("Nama mahasiswa: ");
    scanf("%[^\n]", mahasiswa[counter]);
    counter++;
}

void daftarMahasiswa(){
    system("cls");
    printf("Daftar Mahasiswa\n");
    for (int i = 0; i < counter; i++)
    {
        printf("%s\n", mahasiswa[i]);
    }
    system("pause");
    
}

void hapusMahasiswa(){
    char toDelete[255];
    printf("Masukkan mahasiswa yang ingin dihapus: ");
    scanf("%s", toDelete);

    for (int i = 0; i < counter; i++)
    {
        if (!strcmp(toDelete, mahasiswa[i])) {
            for (int j = i; j < counter; j++)
            {
                strcpy(mahasiswa[j], mahasiswa[j + 1]);
            }
            counter--;
            break;
        } else {
            printf("Not Found\n");
        }
    }
    
}

void randomizer(){
    int index = rand() % 10;
    printf("%d\n", index); 
    printf("%s\n", mahasiswa[index]); 
    system("pause");
}

void menu(){
    int opt;
    do
    {
        system("cls");
        printf("PPTI 19 Management\n");
        printf("1. Masukkan mahasiswa\n");
        printf("2. Hapus mahasiswa\n");
        printf("3. Daftar mahasiswa\n");
        printf("4. Randomizer\n");
        printf("5. Exit\n");
        printf(">> ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            tambahMahasiswa();
            break;

        case 2:
            hapusMahasiswa();
            break;
        
        case 3:
            daftarMahasiswa();
            break;
        
        case 4:
            randomizer();
            break;
        
        case 5:
            printf("End of program\n");
            break;
        
        default:
            printf("Invalid input\n");
            break;
        }
    } while (opt != 5);
    
}


int main(){
    srand(time(0));
    char username[] = "naomi";
    char password[] = "sisil";

    char inputUsername[25];
    char inputPassword[25];
    do {
        printf("Username: ");
        scanf("%s", inputUsername);

        printf("Password: ");
        scanf("%s", inputPassword);
    } while (strcmp(username, inputUsername) && strcmp(password, inputPassword));

    menu();

    return 0;
}

