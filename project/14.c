/*Program on pointers. */
#include <stdio.h>

int main() {
    int num = 10;              
    int *ptr;                  

    ptr = &num;                

    printf("Value of num: %d\n", num);           
    printf("Address of num: %p\n", &num);        
    printf("Value of ptr (Address of num): %p\n", ptr);  
    printf("Value pointed to by ptr: %d\n", *ptr);        

    return 0;
}
