/*Write a program to perform arithmetic operation’s using switch case. */

#include<stdio.h>
int main()
{
float num1,num2;
char oprator;
printf("enter the two number:");
scanf("%d %d",&num1,&num2);
getchar();
printf("enter the oprator(+,-,*,/)");
scanf("%c", &oprator);

switch (oprator)
{
case '+':
    printf("the sum is %f\n",num1+num2);
    break;
case '-':
printf("the subtrsct is:%f\n",num1-num2);
break;
case '*':
printf("the multiply is:%f\n",num1*num2);
break;
case '/':
if (num2 !=0 )
{
    printf("the division is:%f\n",num1/num2);
}
else{
    printf("error!! please enter is non zero\n");
}
break;
default:
printf("invalid oprator!!!");
    break;
}
return 0;
}