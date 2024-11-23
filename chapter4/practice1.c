#include <stdio.h>

int main(){
    /*
  Quick Quiz: Write a program to print natural numbers from 100 to 110 when initial loop
 counter is initialized to 0.
   */

    int i = 0;
    while(i<=110){
        if(i>=100){
            printf("The value of i is %d\n", i);
        }
        i++;
    }

    return 0;
}