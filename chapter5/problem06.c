/*. Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :*/
#include<stdio.h>
int main(){
    int a[10];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the a[%d]",i);
        scanf("%d",&a[i]);
    }
   printf("the unique number is :");
    for (int i = 0; i < 4; i++)
    {
        int count=0;
        for (int j = 0; j < 4; j++)
        {
            if(a[i]==a[j]){
               count++; 
            }
        }
        if(count==1){
            printf("%d",a[i]);
        }
    }
   
    
    return 0;
}