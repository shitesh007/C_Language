/* Write a program in C to sort the elements of the array in descending order.
Test Data :
Input the size of array : 3
Input 3 elements in the array :*/
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
                 if(a[i]<a[j]) {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                 }  
            }
    }
            printf("the decending order of this array:");
            for (int i = 0; i < 5; i++)
            {
                printf("%d",a[i]);
            }
    
    return 0;
}