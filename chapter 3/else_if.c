#include <stdio.h>

int main(){
    int age = 45;

    if(age>18){
        printf("You can drive because you are exprience");
    }
    else if(age>40){
        printf("You can drive and you are elder");
    } 
    else if(age>18){
        printf("You can drive but safely drive");
    }
    else{
        printf("You cannot drive");
    }


    return 0;
}