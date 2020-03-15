#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Admin{
    char name[30];
    char specialization[50];
    char home_location[50];
    char qualification[10];
    char chember_location;
    char opening_timings[10];
    char closing_timings[10];
    int fees;
}Admin;
struct Admin adminFun()
{
    Admin a1;
    int i,b,c,j;
    char n;
    puts("ADMINISTRATOR SIGN UP");
    puts("Enter Your Name");
    scanf("%s",a1.name);
    puts("Enter your Last Qualification");
    scanf("%s",&a1.qualification);
    puts("Enter you Full Address");
    scanf("%s",&a1.home_location);
    puts("how many specialization you want to insert?");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {   printf("%d row\n",i);
        scanf("%s",&a1.specialization[i]);
    }




    printf("\n -------------------------printing the datas-------------------\n");
    puts(a1.qualification);
    for(i=0;i<c;i++)
    {
        printf("%s",a1.specialization[i]);
    }
};
