#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (b != 0)
        printf("Quotient = %d", a / b);
    else
        printf("Error: division by zero!");

    return 0;
}
