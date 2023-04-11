#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "create.h"
#include "read.h"
#include "update.h"
#include "delete.h"


int main(void) {
    int option;
    Livro l[50];

    while (option != 5) {
        printf("\nSelect an option:\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Exit\n");

        scanf("%d", &option);

        switch (option) {
            case 1:
                create(&l[50]);
                break;
            case 2:
                read(&l[50]);
                break;
            case 3:
                update(&l[50]);
                break;
            case 4:
                delete(&l[50]);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option\n");
                return 0;
        }
    }

    return 0;
}

