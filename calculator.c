#include <stdio.h>

/* Function to add two numbers */
float add(float a, float b)
{
    return a + b;
}

/* Function to subtract two numbers */
float sub(float a, float b)
{
    return a - b;
}

/* Function to multiply two numbers */
float mul(float a, float b)
{
    return a * b;
}

/* Function to divide two numbers */
float divi(float a, float b)
{
    return a / b;
}

int main()
{
    int choice;
    float x, y, result;

    do
    {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
        }

        switch (choice)
        {
            case 1:
                result = add(x, y);
                printf("Sum = %.2f\n", result);
                break;

            case 2:
                result = sub(x, y);
                printf("Difference = %.2f\n", result);
                break;

            case 3:
                result = mul(x, y);
                printf("Product = %.2f\n", result);
                break;

            case 4:
                if (y == 0)
                    printf("Division by zero is not possible\n");
                else
                {
                    result = divi(x, y);
                    printf("Quotient = %.2f\n", result);
                }
                break;

            case 5:
                printf("Exiting program. Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}