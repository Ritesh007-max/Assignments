#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    struct Date jDate;
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name : ");
    scanf("%s", e.name);

    printf("Enter Joining Date: ");
    scanf("%d", &e.jDate.day);
     
    printf("Enter Joining month: ");
    scanf("%d",&e.jDate.month);
      
    printf("Enter Joining year: ");
    scanf("%d",&e.jDate.year);
        

 
    printf("%d \n", e.id);
    printf("%s\n", e.name);
    printf(" %d-%d-%d\n",e.jDate.day,e.jDate.month,e.jDate.year);

    return 0;
}
// #include <stdio.h>

// struct Student {
//     int roll;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student s[5];
//     int i;

//     for (i = 0; i < 5; i++) {

//         printf("Roll No: ");
//         scanf("%d", &s[i].roll);

//         printf("Name : ");
//         scanf("%s", s[i].name);

//         printf("Marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     printf("students list is :- \n \n ");
//     for (i = 0; i < 5; i++) {
       
//         printf("Roll No: %d\n", s[i].roll);
//         printf("Name: %s\n", s[i].name);
//         printf("Marks: %.2f\n", s[i].marks);
//     }

//     return 0;
// }
// #include <stdio.h>

// struct Book {
//     char title[100];
//     char author[100];
//     float price;
// };
// int main() {
//     struct Book b;
//     printf("Enter book title: ");
//     scanf("%s",&b.title); 

//     printf("Enter author name ): ");
//     scanf("%s",&b.author);

//     printf("Enter book price: ");
//     scanf("%f", &b.price);

    
//     printf("%s \n", b.title);
//     printf("%s \n", b.author);
//     printf("%.2f \n", b.price);

//     return 0;
// }
