#include<windows.h>
#include<sql.h>
#include<stdio.h>
int main()
{
    MYSQL *conn;
    conn=mysql_init(0);
    conn=mysql_real_connect(conn,"127.0.0.1","root","","student",0,NULL,0)
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
