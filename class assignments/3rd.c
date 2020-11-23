#include<stdio.h>
int main()
{
    int x=1,qtnt,lmt;
    printf("enter the limit of quotient");
    scanf("%d",&lmt);
    while(x<=10)
    {
        printf("%d\n",qtnt);
        qtnt=lmt*x;
        ++x;
    }
    return 0;
}