/*Write a program for computing volume of cylinder, sphere and cone assume that     
dimensions are integer’s use typecasting where ever necessary.*/

#include<stdio.h>
int main()
{
float radius, height;
printf("enter the radius:");
scanf("%f",&radius);
printf("enter the height:");
scanf("%f",&height);
float pi=3.14;
float volume_of_cylinder=pi*radius*radius*height;
float volume_of_sphare=4/3*pi*radius*radius*radius;
float volume_of_cone=(pi*radius*radius*height)/3;
printf(" the volume of cylinder is:%.2f\n",volume_of_cylinder);
printf("the volume of sphare is:%.2f\n",volume_of_sphare);
printf("the volume of cone is:%.2f\n",volume_of_cone);
return 0;
}