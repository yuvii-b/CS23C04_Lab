#include <stdio.h>
#include <string.h>

struct Book{
    char author[50];
    char publisher[50];
    float rate;
    char branch[50];
};

void printbooks(struct Book books[], char *name, int n){
    printf("Books published by publisher %s:\n", name);
    int found = 0;
    for(int i = 0; i < n; ++i){
        if(strcmp(books[i].publisher, name) == 0){
            printf("Book %d\n", i + 1);
            printf("Author: %s\n", books[i].author);
            printf("Publisher: %s\n", books[i].publisher);
            printf("Rate: %.2f\n", books[i].rate);
            printf("Branch: %s\n", books[i].branch);
            found = 1;
        }
    }
    if(!found){
        printf("No books found from the publisher %s\n", name);
    }
}

int main(){
    struct Book books[5] = {
        {"J.K Rowling", "Bloomsbury", 1000, "Fiction"},
        {"Agatha Christie", "HarperCollins", 800, "Crime"},
        {"George Orwell", "Harvill Secker", 9000, "Non-Fiction"},
        {"J.K Rowling", "Bloomsbury", 1500, "Fiction"},
        {"George RR Martin", "HarperCollins", 1500, "Fantasy"}
    };
    char publisher_name[50];
    printf("Enter the publisher name to search for: ");
    fgets(publisher_name, sizeof(publisher_name), stdin);
    publisher_name[strcspn(publisher_name, "\n")] = '\0';
    printbooks(books, publisher_name, 5);
    return 0;
}