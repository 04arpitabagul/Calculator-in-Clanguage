//Q.1 Calculator
//Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
//using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
//is pressed.
//Example:
//Input/Output:
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 1
//Enter the first number: 5
//Enter the second number: 3
//Addition of 5 and 3 is 8
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//Enter your choice: 4
//Enter the first number: 10
//Enter the second number: 5
//Division of 10 and 5 is 2
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//Enter your choice: 0

#include <stdio.h>
#include<conio.h>

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if(y == 0) {
        printf("Error: Division by zero is not allowed\n");
        return 0;
    }
    return x / y;
}

float modulus(float x, float y) {
    return (int)x % (int)y;
}

int main() {
    int choice;
    float num1, num2;

    while(1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0) {
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch(choice) {
            case 1:
                printf("Addition of %.2f and %.2f is %.2f\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %.2f and %.2f is %.2f\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %.2f and %.2f is %.2f\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                printf("Division of %.2f and %.2f is %.2f\n", num1, num2, divide(num1, num2));
                break;
            case 5:
                printf("Modulus of %.0f and %.0f is %.0f\n", num1, num2, modulus(num1, num2));
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

