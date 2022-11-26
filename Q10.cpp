#include<stdio.h>                   //menu driven program for authentication system
#include<string.h>
int main()
{
    char a[2][4][20],username[20],pass[20];
    int i,j,flag=0;
    printf("Enter the username : \npassword : \nmobile number : \nage for data : \n");
    for(i=0;i<2;i++)
    {
    for(j=0;j<4;j++)
    gets(a[i][j]);
    }
    printf("Enter your user name : ");
    gets(username);
    printf("Enter the password : ");
    gets(pass);
    for(i=0;i<2;i++){
        if(strcmp(username,a[i][0])==0 && strcmp(pass,a[i][1])==0)
    {
        printf("Login successful !!! ");
        flag=1;
    }
    }
    if(flag==0)
        printf("Sorry credentials not found");
    return 0;


}
