#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50];
    char authorName[30];
    float price;
    int pages;
} Book;

int main() {
    Book books[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter details for book %d:\n", i+1);
        printf("Name: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = 0;
        printf("Author Name: ");
        fgets(books[i].authorName, sizeof(books[i].authorName), stdin);
        books[i].authorName[strcspn(books[i].authorName, "\n")] = 0;
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Pages: ");
        scanf("%d", &books[i].pages);
    }

    for(int i = 0; i < 5; i++) {
        printf("\nBook %d Details:\n", i+1);
        printf("Name: %s \n", books[i].name);
        printf("Author Name: %s\n", books[i].authorName);
        printf("Price: %.2f\n", books[i].price);
        printf("Pages: %d\n", books[i].pages);
    }

    return 0;
}
