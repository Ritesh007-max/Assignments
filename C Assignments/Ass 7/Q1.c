#include <stdio.h>
#include <string.h>

struct Book
{

    double id;
    float price;
    char title[100];
};

int main()
{

    struct Book books[5];
    books[0].id = 244355;
    books[1].id = 350005;
    books[2].id = 544355;
    books[3].id = 350568;
    books[4].id = 544347;
    books[5].id = 350558;

    books[0].price = 19.99;
    books[1].price = 29.99;
    books[2].price = 39.99;
    books[3].price = 49.99;
    books[4].price = 59.99;
    books[5].price = 69.99;

    strcpy(books[0].title, "eiorgopj");
    strcpy(books[1].title, "eiorgopj");
    strcpy(books[2].title, "eiorgopj");
    strcpy(books[3].title, "eiorgopj");
    strcpy(books[4].title, "eiorgopj");
    strcpy(books[5].title, "eiorgopj");

    return 0;
}