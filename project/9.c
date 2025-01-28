/*Write a program to read marks of a student in six subjects and print whether pass or   fail */

#include<stdio.h>
int main()
{
float math,BEE,pbl,ppc,ida,ed;
printf("enter the marks of math:");
scanf("%f",&math);
printf("enter the marks of BEE:");
scanf("%f",&BEE);
printf("enter the marks of pbl:");
scanf("%f",&pbl);
printf("enter the marks of ppc:");
scanf("%f",&ppc);
printf("enter the marks of ida:");
scanf("%f",&ida);
printf("enter the marks of ed:");
scanf("%f",&ed);
float total=math+BEE+pbl+ppc+ida+ed;
float percentage=(total/600)*100;
printf("your total marks is:%.2f\n",total);
printf("your percentage is:%.2f\n",percentage);
if (percentage<30)
{
   printf("you are fail!!\n");
}
else
{
    printf("you are pass\n");
}
if (math<30)
{
    printf("you are fail in math:%f\n",math);
}
else{
    printf("good you are pass\n");
}
if (BEE<30)
{
    printf("you are fail in BEE:%f\n",BEE);
}
else{
    printf("good you are pass\n");
}
if (pbl<30)
{
    printf("you are fail in pbl:%f\n",pbl);
}
else{
    printf("good you are pass\n");
}
if (ppc<30)
{
    printf("you are fail in ppc:%f\n",ppc);
}
else{
    printf("good you are pass\n");
}
if (ida<30)
{
    printf("you are fail in ida:%f\n",ida);
}
else{
    printf("good you are pass\n");
}
if (ed<30)
{
    printf("you are fail in ed:%f\n",ed);
}
else{
    printf("good you are pass\n");
}

return 0;
}