/* Write a program to check equivalence of two number’s using conditional operator. */

#include<stdio.h>
int main()
{
int a,b;
printf("enter the number of a:");
scanf("%d",&a);
printf("enter the number of b:");
scanf("%d",&b);
if (a>b)
{
    printf("a is greater:%d",a);
}
else {
    printf("b is greater :%d",b);
}
return 0;
}