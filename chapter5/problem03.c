/* Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :*/
#include<stdio.h>
int main(){
    int a[3],b[3],total_sum=0,sum[3];
    
    for (int i = 0; i < 3; i++)
    {
        printf("enter the a[%d] element",i);
       scanf("%d",&a[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("enter the b[%d] element",i);
        scanf("%d",&b[i]);
        total_sum+=a[i]+b[i];
    }
    printf("the sum of a[3] and b[3] is %d\n",total_sum);
    for (int i = 0; i < 3; i++)
    {
        sum[i]=a[i]+b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("sum[%d]: is %d\n",i,sum[i]);
    }
    
    return 0;
}