
void update(Livro *l) {
    int option;

    printf("Select an option to update:\n");
    printf("1. Name\n");
    scanf("%d", &option);

    if (option==1){
        printf("Enter new name: ");
        scanf("%s", l->name);
    }
    else{
        printf("Invalid option\n");
    }
}