#include<stdio.h>
#include<string.h>
int main(){
    int password;
    char username[50];
    printf("enter the usename :");
    scanf("%s",&username);
    printf("enter the password :");
    scanf("%d",&password);
    if(strcmp(username,"sumityadav")==0 && password==12345){
        printf("you are login");
    }
    else
    printf("incorrect password ");
    return 0;
}