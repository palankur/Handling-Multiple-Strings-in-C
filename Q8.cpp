#include<stdio.h>               //minimum distance b/w two words
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,w1=-1,w2=-1,temp,min=10000;
    char a[5][20]={"my","name","is","ankur","pal"};
    char word1[20],word2[20];
    printf("The given string is : my name is ankur pal ");
    printf("\nEnter the first word for finding the distance : ");
    gets(word1);
    printf("Enter the second word for finding the distance : ");
    gets(word2);
    for(i=0;i<5;i++)
    {
        if(strcmp(a[i],word1)==0)
        w1=i;
        if(strcmp(a[i],word2)==0)
        w2=i;
        if(w1 !=-1 && w2 !=-1)
        {
            temp = abs(w2-w1);
            if(temp<min)
            min=temp;
        }
    }
    printf("%d",min-1);
    return 0;
}
