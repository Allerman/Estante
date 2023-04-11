void create(Livro *l) {
    printf("Enter book ID: ");
    scanf("%d", &l->id);

    printf("Enter book title: ");
    fgets(l->title,50,stdin);
    
    }

