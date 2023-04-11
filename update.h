
void update(Livro *l) {
    int option;

    printf("type 1 if you want to update the title:\n");
    scanf("%d", &option);

    if (option==1){
        printf("Enter new title: ");
        fgets(l->title,50,stdin);
    }
    else{
        printf("Invalid option\n");
    }
}