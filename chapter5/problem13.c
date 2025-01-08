/*. Write a program in C to insert the values in the array (sorted list).
Test Data :
Input number of elements you want to insert (max 100): 5
Input 5 elements in the array */
#include <stdio.h>
int main()
{
    int n = 5;
    int a[100];
    int insert_value;
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        printf("enter the a[%d] element:", i);
        scanf("%d", &a[i]);
    }
    printf("insert the value :");
    scanf("%d", &insert_value);
    for (int i = 0; i < 5-1; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if(a[i]>a[j]){
                int temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (insert_value < a[i])
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        pos = 5;
    }
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = insert_value;
    n++;
    printf("the new array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}