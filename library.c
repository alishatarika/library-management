#include <stdio.h>
#include <string.h>
struct Student
{
    char name;
    int rollNumber;
    char section;
};
void issuebook();
void returnbook();
int main()
{
    int n;

    struct Student data;
    printf("Enter student name ");
    scanf("%s", &data.name);
    printf("Enter student roll number ");
    scanf("%d", &data.rollNumber);
    printf("Enter section ");
    scanf("%s", &data.section);

    printf("1.Issue a book \n");
    printf("2.Want to return a book \n");
    printf("Enter a choice \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        issuebook();
         break;
    case 2:
        returnbook();
        break;
    }
}
void issuebook()
{
    int date;
    int month;
    char a;
    char b;
    int year;
    printf("Which subject book do you want ");
    scanf("%s", &a);
    printf("Enter author name ");
    scanf("%s", &b);
    printf("issue date \n");
    scanf("%d %d %d", &date, &month, &year);
}

void returnbook()
{
    int date;
    int month;
    int year;
    int date1;
    int month1;
    int year1;

    printf("returning date \n");
    scanf("%d %d %d", &date, &month, &year);

    printf(" last date to returned book \n");
    scanf("%d %d %d", &date1, &month1, &year1);
    if (month == month1)
    {
        if (date >= date1)
        {

            printf("Book returned on time");
        }
    }
    else
    {
        printf("fine will be imposed");
        int a = date1 - date;

        printf("%d", a * 2);
    }
}
