#include <stdio.h>
int square(int a);
int main()
{
int var1,result;
printf("enter first number");
scanf("%d",&var1);
result=square(var1);
printf("result=%d",result);
return 0;

}
int square(int a)
{
int c;
c=a*a;

return c;
}