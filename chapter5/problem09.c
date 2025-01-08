/*. Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :*/

#include <stdio.h>
int main()
{
    int a[3], max, min;
    for (int i = 0; i < 3; i++)
    {
        printf("enter the a[%d] elements:", i);
        scanf("%d", &a[i]);
        max=a[0];
        min=a[0];
    }
   for (int i = 0; i < 3; i++)
   {
    if(a[i]>max){
        max=a[i];
    }
    if(a[i]<min){
        min=a[i];
    }
   }
   printf("the maximum value in this array is %d\n",max);
   printf("the minimum value in thsi array is  %d\n",min);
    return 0;
}