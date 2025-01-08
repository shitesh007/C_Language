/* Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :*/
#include<stdio.h>
int main(){
    int a[3],copy_a[3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter the a[%d] elements :",i);
        scanf("%d",&a[i]);
    }
      for (int i = 0; i < 3; i++)
      {
        int temp=a[i];
        a[i]=copy_a[i];
        copy_a[i]=temp;
      }
      printf("the copy of element :");
      for (int i = 0; i < 3; i++)
      {
        printf("%d",copy_a[i]);
      }
      
    return 0;
}