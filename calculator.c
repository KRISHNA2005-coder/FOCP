#include <stdio.h>
#include <math.h>
void calculator() {
    int choice;
    double num1, num2;

    
    printf("Choose an operation:\n");
    printf("1. Add (+) \n");
    printf("2. Subtract (-) \n");
    printf("3. Multiply (*) \n");
    printf("4. Divide (/) \n");
    printf("5. Log log10(number) \n");
    printf("6. sqrt(number)\n");

    
    printf("Enter your choice (1-6):- ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    } 

    else if (choice == 5 || choice == 6) {
        printf("Enter one number: ");
        scanf("%lf", &num1);
    }

    switch(choice) {
        case 1:
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 !=0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error\n");
            }
            break;
        case 5:
            if (num1 > 0) {
                printf("log10(%.2lf) = %.2lf\n", num1, log10(num1));
            } else {
                printf("Error\n");
            }
            break;
        case 6:
            if (num1 >= 0) {
                printf("Square root of %.2lf = %.2lf\n", num1, sqrt(num1));
            } else {
                printf("Error\n");
            }
            break;
        default:
            printf("Invalid\n");
            break;
    }
}

int main() {
    calculator();
    return 0;
}