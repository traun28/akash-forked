#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
 calculator.c
#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter operation (e.g., + - * /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+': printf("Result = %.2lf\n", num1 + num2); break;
        case '-': printf("Result = %.2lf\n", num1 - num2); break;
        case '*': printf("Result = %.2lf\n", num1 * num2); break;
        case '/': 
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Division by zero error!\n");
            break;
        default: printf("Invalid operator!\n");
    }

    return 0;
}}
