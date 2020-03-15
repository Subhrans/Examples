#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<mysql.h>
using namespace std;
int main()
{
    MYSQL *conn;
    conn=mysql_init(0);
    conn=mysql_real_connect(conn,"127.0.0.1","root@localhost","","test_new",0,NULL,0);
    if(conn)
    {
        printf("connected");
    }
    else
    {
        puts("not connected");
    }
    return 0;
}
