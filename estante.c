#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    char autor[50] ;
} Livro;

int main() {
    int option;
    Livro l;

    do {
        printf("Select an option:\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                create(&p);
                break;
            case 2:
                read(&p);
                break;
            case 3:
                update(&p);
                break;
            case 4:
                delete(&p);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option\n");
        }
    } while (option != 5);

    return 0;
}
