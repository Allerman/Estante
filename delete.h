void delete(Livro *l) {
    l->id = 0;
    l->title[0] = '\0';

    printf("successfully deleted book");
}
