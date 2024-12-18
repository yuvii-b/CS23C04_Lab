#include <stdio.h>

struct Book{
    char name[50];
    char author[50];
};

int main(){
    struct Book book;
    struct Book *ptr;
    ptr = &book;
    printf("Enter the name of the book: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    printf("Enter the name of the author: ");
    fgets(ptr->author, sizeof(ptr->author), stdin);
    printf("The name of the book: %s", ptr->name);
    printf("The name of the author is: %s", ptr->author);
    return 0;
}