#include<stdio.h>       //search a string in a group of string
#include<string.h>
int main()
{
    int i,j,flag=0;
    char a[5][20],b[20];
    printf("Enter any five strings : ");
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    printf("Enter the string which needs to be searched : ");
    gets(b);
    for(i=0;i<5;i++)
    {
            if(strcmp(a[i],b)==0)
                flag=1;
    }
    if(flag)
        printf("The string is present");
    else
        printf("The string is not present");
    return 0;

}
