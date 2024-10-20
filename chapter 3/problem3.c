#include <stdio.h>

int main() {
    float num1, num2;
    char oprator;
    float result;


    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &oprator);

    
    if (oprator == '+') {
        result = num1 + num2;
        printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, result);
    }
    else if (oprator == '-') {
        result = num1 - num2;
        printf("The subtraction of %.2f from %.2f is %.2f\n", num2, num1, result);
    }
    else if (oprator == '*') {
        result = num1 * num2;
        printf("The product of %.2f and %.2f is %.2f\n", num1, num2, result);
    }
    else if (oprator == '/') {
     
        if (num2 != 0) {
            result = num1 / num2;
            printf("The division of %.2f by %.2f is %.2f\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed!\n");
        }
    }
    else {
        
        printf("Invalid operator! Please use one of +, -, *, or /.\n");
    }

    return 0;
}
