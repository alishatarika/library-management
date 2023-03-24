#include <stdio.h>
#include <string.h>
struct student
{
    char name[23];
    int rollnumber;
    char section;
};
int main()
{
    int n, date, month, year, date1, month1, year1;
    char a[60];
    char b[60];
    struct student data;
    printf("Enter student name ");
    scanf("%s", &data.name);
    printf("Enter student roll number ");
    scanf("%d", &data.rollnumber);
    printf("Enter section ");
    scanf("%s", &data.section);

    printf("1.Issue a book \n");
    printf("2.Want to return a book \n");
    printf("Enter a choice \n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:

        printf("Which subject book do you want");
        printf("Enter author name");
        scanf("%s %s", &a, &b);
        printf("issue date \n");
        scanf("%d %d %d", &date, &month, &year);
        break;
    case 2:
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
        break;
    };

    return 0;
}
