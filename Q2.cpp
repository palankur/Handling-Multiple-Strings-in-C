#include<stdio.h>      //sorting of a 2D array
#include<string.h>
int main()
{
    int i,j;
    char a[10][20],b[20];
    printf("Enter ten cities name : ");
    for(i=0;i<10;i++)
    gets(a[i]);
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            if (strcmp(a[i],a[j])>0)
            {
                strcpy(b,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],b);
            }
        }
    }
        for(i=0;i<10;i++)
            printf("%s\n",a[i]);
        return 0;

}
