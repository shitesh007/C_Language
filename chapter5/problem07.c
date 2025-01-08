/* Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :*/
#include<stdio.h>
int main(){
    int a[3],b[3];
    int merge[2*3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter the  a[%d] element:",i);
        scanf("%d",&a[i]);
    }
     for (int i = 0; i < 3; i++)
    {
        printf("enter the  b[%d] element:",i);
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        merge[i]=a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        merge[3+i]=b[i];
    }
    for (int i = 0; i < 2*3-1; i++)
    {
        for (int j = i+1; j < 2*3; j++)
        {
            if(merge[i]<merge[j]){
                int temp=merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
        }
    }
    printf("the merge array is :");
    for (int i = 0; i < 3*2; i++)
    {
            printf("%d",merge[i]);
    }
    return 0;
}