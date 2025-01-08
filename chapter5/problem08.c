/*Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :*/
#include<stdio.h>
int main(){
    int a[3];
    int count;
    for (int i = 0; i < 3; i++)
    {
        printf("enter the a[%d] elements",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2-i; j++)
        {
           if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
        }
    }
    printf("the frequency of each elements in this array:\n");
   for (int i = 0; i < 3; i++) {
        count = 1;
        while (i < 2 && a[i] == a[i + 1]) {
            count++;
            i++;
        }
        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}