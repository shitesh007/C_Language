#include <stdio.h>
#include <string.h>  

int main() {
    char password[20];  
    
   
    printf("Enter the password: ");
    scanf("%s", password);  
    
   
    if (strcmp(password, "896744") == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
