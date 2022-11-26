#include<stdio.h>               //wap to read and display 2-D araay string
#include<string.h>
int main()
{
    int i;
    char a[4][20];
    printf("Enter four cities name : ");
    for(i=0;i<4;i++)
    fgets(a[i],20,stdin);
    printf("Your entered strings are : ");
    for(i=0;i<4;i++)
        printf("%s",a[i]);
    return 0;
}
