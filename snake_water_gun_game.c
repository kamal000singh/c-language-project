#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gameforfun(char y,char c)
{
    if(y==c)
    {
        return 0;
    }
    if (y=='s' &&  c=='w')
    {
        return 1;
    }
    else if (y=='w' &&  c=='s')
    {
        return -1;
    }
    if (y=='w' &&  c=='g')
    {
        return 1;
    }
    else if (y=='g' &&  c=='w')
    {
        return -1;
    }
    if (y=='g' &&  c=='s')
    {
        return 1;
    }
    else if (y=='s' &&  c=='g')
    {
        return -1;
    }
}
int main()
{
    char you,comp;
    srand(time(0));
    int n = rand() % 100 + 1;
    if (n<33)
    {
        comp='s';
    }
    else if (n>=33 && n<66)
    {
        comp='w';
    }
    else
    {
        comp='g';
    }    
    printf("Enter your choice: 's' for snake,'w' for water , 'g' for gun \n");
    scanf("%c",&you);
    int res=gameforfun(you,comp);
    printf("You choose %c and computer choose %c\n",you,comp);
    if (res==0)
    {
        printf("Game Draw");
    }
    else if (res==1)
    {
        printf("You win");
    }
    else
    {
        printf("You lose");
    }
    return 0;
}