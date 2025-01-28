/*Write a program to demonstrate logical operators. . */

#include<stdio.h>
int main()
{
int a=1;
int b=0;
if(a&&b){
    printf("true!\n");
}
else{
    printf("false\n");
}
if (a||b)   
{
    printf("true!\n");
}
else{
    printf("false");
}
if (!a)
{
    printf("true\n");
}
else{
    printf("false\n");
}
return 0;
}