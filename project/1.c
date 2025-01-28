/*Write a program to demonstrate arithmetic operators. */
#include<stdio.h>
int main()
{
int a,b,c;

printf("enter the number of a:");
scanf("%d",&a);
printf("enter the number of b:");
scanf("%d",&b);
printf("enter the number of c:");
scanf("%d",&c);
int sum=a+b+c;
int sub=a-b-c;
int multiply=a*b*c;
float divide=a/b;
printf("%d\n",sum);
printf("%d\n",sub);
printf("%d\n",multiply);
printf("%d\n",divide);
return 0;
}