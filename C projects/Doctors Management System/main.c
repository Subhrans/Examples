#include <stdio.h>
#include <stdlib.h>
//#include<graphics.h>
#include "User_SignUp.h"
#include "Administrator_SignUp(1).h"
int main()
{
    int i,j,k,l,n;
    /*for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("-");
        }
        for(k=0;k<i;k++)
        {
            printf("|");
        }
        printf("\n"f);
    }*/
    printf("--------------------------------------------------------");
    puts("1. Admin Login");
    puts("2. User Login");
    puts("3. Exit");
    puts("Enter Your Choice");
    scanf("%d",&n);
    switch(n)
    {

    case 1:
        adminFun();
        break;
    case 2:
        //userFun();
        break;
    case 3:
        exit(0);
        break;
    default:
        puts("Invalid Option");
    }
    return 0;
}
