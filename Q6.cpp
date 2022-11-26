#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0,z;
    char a[5][20]={"madam","ankur","sir","ineuron","level"};
    char b[20],c[20];
    printf("String list are : \nmadam\nankur\nsir\nineuron\nlevel");
    printf("\nEnter the string you want to search : ");
    gets(b);
    for(i=0;i<5;i++)
    {
    if(strcmp(a[i],b)==0)
    {
        strcpy(b,c);
        strrev(c);
        if (strcmp(c,b)==0)
        {
        flag=1;
        break;
        }
    }
    else
        printf("Error!!! string NOT FOUND");
        break;
    }
   if(flag==1)
        printf("The choosen string is palindrome.");
    else
        printf("The choosen string is not palindrome");
    return 0;
}
