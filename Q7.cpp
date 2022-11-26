#include<stdio.h>       //valid IP address or not
#include<string.h>
int main()
{
    int i,j,count=0;
    char a[5][20],b[20];
    printf("Enter any five strings : ");
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<=5;j++)
        count=0;
            if(a[i][j]=='.')
                count++;
    }
    if(count==3)
        printf("\n%s",a[i]);
    return 0;
}
