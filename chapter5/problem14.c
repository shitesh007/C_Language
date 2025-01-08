/*14. Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:*/
#include<stdio.h>
int main()
{
int a[100];
int n=5;
int insert_value,position=-1;
for (int i = 0; i < n; i++)
{
    printf("enter the a[%d] elements :",i);
    scanf("%d",&a[i]);
}
printf("enter the insert_value:");
scanf("%d",&insert_value);
for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for (int i = 0; i < n; i++)
{
    if(insert_value<a[i]){
        position=i;
        break;
    }
}
if (position==-1){
    position=n;
}
for (int i = n; i > position; i--)
{
    a[i]=a[i-1];
}
a[position]=insert_value;
n++;
printf("this is new array :");
for (int i = 0; i < n; i++)
{
    printf("%d",a[i]);
}
return 0;
}