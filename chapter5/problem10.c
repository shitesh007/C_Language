/*Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array */
#include <stdio.h>
int main()
{
    int a[5], odd[5], even[5], evencount=0, oddcount=0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the a[%d] elements:", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[evencount++] = a[i];
            
        }
        if (a[i] % 2 != 0)
        {
            odd[oddcount++] = a[i];
        }
    }
        printf("the value of odd is %d in this arrray\n", oddcount);
        printf("the value of even is %d in this arrray\n", evencount);
         printf("the odd value of this array\n");
        for (int i = 0; i < oddcount; i++)
        {
            printf("%d",odd[i]);
        }
        printf("the even value of this array");
         for (int i = 0; i < evencount; i++)
        {
            printf("%d",even[i]);
        }
        return 0;
    }