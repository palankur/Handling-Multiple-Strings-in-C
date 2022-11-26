#include<stdio.h>               //vowels in 2D string
int main()
{
    int i,j,count=0;
    char str[5][10];
    printf("Enter five strings : ");
    for(i=0;i<=4;i++)
    fgets(str[i],10,stdin);
    for(i=0;i<=4;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]== 'a' || str[i][j]== 'e' || str[i][j]== 'i' || str[i][j]== 'o' || str[i][j]=='u')
            {
            count++;
            }
        }
        printf("\nNo. of vowels in %s are : %d",str[i],count);
        count=0;
    }
    return 0;

}
