#include <stdio.h>

int main() {
    int x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    temp = x;
    x = y;
    y = temp;

    printf("After swap: x = %d, y = %d", x, y);

    return 0;
}
