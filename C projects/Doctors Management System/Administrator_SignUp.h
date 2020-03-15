#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Admin{
    char name[30];
    char *specialization;
    char *home_location;
    char *qualification;
    char *chember_location;
    char *opening_timings;
    char *closing_timings;
    int fees;
}Admin;
struct Admin adminFun()
{
    Admin a1;
    int i,b;
    char n;
    puts("ADMINISTRATOR SIGN UP");
    puts("Enter Your Name");
    scanf("%s",a1.name);
    //gets(a1.name);
    //for(i=0;a1.name[i]!='\0';i++)
    //{
      //  scanf("%c",&a1.name[i]);
    //}
    puts("Enter Your Specialization");
    a1.specialization=(char *)malloc(5*sizeof(char));
    //scanf("%s",a1.specialization);
    do{
        a1.specialization=(char *)realloc(a1.specialization,20*sizeof(char));

       // printf("ohh yes");
        i=0;
        puts("re-enter");
        scanf(" %s",&a1.specialization+i);
        printf("%s",*a1.specialization);
        puts("Do you want to Add more");
        getchar();
        scanf(" %c",&n);
         i++;
    }while(n=='y');
    printf("\n ok");
    printf("%s",*a1.specialization);
    //for(i=0;i<strlen(a1.specialization);i++)
    //{

       // printf("%s",*a1.specialization);
    //}
    i=0;
    while(*(a1.specialization+i)!='\0')
    {

        printf("%c",*(a1.specialization+i));
        i++;
    }
};
