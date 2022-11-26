#include<stdio.h>       //find @ in a given string if not found print the string
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
    for(i=0;i<5;i++)
    {
            if(strchr(a[i],'@')==0)
                printf("\n%s",a[i]);
    }
    return 0;

}
