/*Write a program to calculate simple interest.. */

#include<stdio.h>
int main()
{
float p,r,t;
printf("enter the principle:");
scanf("%f",&p);
printf("enter the the rate:");
scanf("%f",&r);
printf("enter the time:");
scanf("%f",&t);
float  SI=(p*r*t)/100;
printf("the simple intrest is: %.2f\n",SI);
return 0;
}