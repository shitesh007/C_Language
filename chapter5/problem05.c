/*Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :*/
#include<stdio.h>
int main(){
    int count=0,n;
    printf("input the total number of element:");
    scanf("%d",&n);
     int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("duplicate elements are :");
    for (int i = 0; i < n; i++)
    {
        if(a[i]==-1){
            continue;
        }
        for (int j =i+1; j < n; j++)
        {
            if(a[i]==a[j]){
                count++;
                printf("%d",a[i]);
                printf("\n");
                a[j]=-1;
                break;
            }
        }
        
    }
    printf("the total number of duplicate is %d",count);
    return 0;
}