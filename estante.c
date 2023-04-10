#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "create.h"
#include "read.h"
#include "update.h"
#include "delete.h"


int main(void) {
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
                create(&l);
                break;
            case 2:
                read(&l);
                break;
            case 3:
                update(&l);
                break;
            case 4:
                delete(&l);
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

