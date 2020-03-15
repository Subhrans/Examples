#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// User SignUp page
typedef struct User{
    char name[30];
    char *email;
    char *password;
    char *address;
    int age;
    //   Optional pore debo char *current location;
}User;

