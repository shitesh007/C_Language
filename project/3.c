/*Write a program to read radius value from the keyboard and calculate the area of circle   
and print the result both floating and exponential notation.*/

#include<stdio.h>
int main()
{
float radius;
float pi=3.14;
printf("enter the radius:");
scanf("%f",&radius);
float area_of_circle=pi*radius*radius;
printf("the area of circle is:%.2f",area_of_circle);
return 0;
}