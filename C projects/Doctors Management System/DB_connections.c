#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<windows.h>
#include<mysql.h>
void display();
void insert();
void del();
void update();
void drop();
MYSQL *conn;
MYSQL_RES* result;
MYSQL_ROW row;
int status;
int main()
{

    conn=mysql_init(0);
    printf("MySQL client version: %s\n", mysql_get_client_info());
    conn=mysql_real_connect(conn,"127.0.0.1","root","","student",0,NULL,0);
    if(conn)
    {
        printf("connected");
        if(mysql_query(conn, "SELECT * FROM stu"));
        {
            fprintf(stderr, "\n%s\n", mysql_error(conn));            ///createtion of database
            //printf("%d",status);
            display();
            insert();
        }

        mysql_close(conn);
    }
    else
    {
        puts("not connected");
    }
    return 0;
}
void display()
{
        mysql_query(conn,"SELECT * from stu");
        result=mysql_store_result(conn);
        while(row=mysql_fetch_row(result))
        {
            printf("\n%s\t %s",row[0],row[1]);           /// Display tables data
        }
            mysql_free_result(result);
            mysql_close(conn);
            exit(0);
}
void insert()
{
    mysql_query(conn,"INSERT INTO `stu`(`id`, `name`) VALUES (4,'pallabi')");
    //INSERT INTO `stu`(`id`, `name`) VALUES ([value-1],[value-2])
    mysql_close(conn);

}
