#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;
   int sum=a+b,sub=a-b,mul=a*b;
   float div=a/b;

    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, sum);
    printf("the value of mul %d and div is %f \n ",mul,div);
    printf("The remainder when a is divided by b is: %d\n", a%b);

    // This does not work for exponentiation in c
    // int d = a^b;

    return 0;
}