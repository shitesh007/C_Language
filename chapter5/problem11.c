/* Write a program in C to sort elements of an array in ascending order.
Test Data :
Input the size of array : 5
Input 5 elements in the array :*/
#include<stdio.h>
int main(){
    int a[5];
    for (int i = 0; i < 5; i++)
    {
            printf("enter the a[%d] elements:",i);
            scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5-1; i++)
    {
            for (int j = i+1; j < 5; j++)
            {
                 if(a[i]>a[j]) {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                 }  
            }
    }
            printf("the accending order of this array:");
            for (int i = 0; i < 5; i++)
            {
                printf("%d",a[i]);
            }
    
    return 0;
}