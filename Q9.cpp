#include<stdio.h>               //checking for valid username and if found valid allowing for factorial
#include<string.h>
#include<stdlib.h>
void fact(int b)
{
    int i;
    double fact=1;
    for(i=1;i<=b;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %lf",b,fact);
}
int main()
{
    int i,b,temp=0;
    char a[5][20]={"ankur_pal","prateek_sir","saurabh_sir","hitesh_sir","ineuron"};
    char word1[20];
    printf("\nEnter your username : ");
    gets(word1);
    for(i=0;i<5;i++)
    {
        if(strcmp(a[i],word1)==0)
            temp=1;
    }
    if(temp==1){
        printf("Login successful !!\nEnter the number for factorial : ");
    scanf("%d",&b);
    fact(b);
    }
    else
        printf("Error!! Wrong credentials.");
    return 0;
}
