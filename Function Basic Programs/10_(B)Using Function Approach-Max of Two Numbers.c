#include<stdio.h>
#include<conio.h>
int Flag=0;
int Find_Max(int,int);

int main()
{
    int Num1=0,Num2=0,Max=0;
    printf("\Enter 2 Integer Numbers=>");
    scanf("%d%d",&Num1,&Num2);
    Max = Find_Max(Num1,Num2);

    if(Flag == 1)
    {
        printf("\nBoth Given Numbers Are Equal");
    }
    else
    {
        printf("\nMaximum Number from Given Numbers is = %d",Max);
    }
    printf("\nThanks!!!");
    getch();
    return 0;
}
int Find_Max(int N1,int N2)
{
    if(N1 == N2)
    {
        Flag = 1;
        return -1;
    }
    if(N1>N2)
    {
        return N1;
    }
    else
    {
        return N2;
    }
}
