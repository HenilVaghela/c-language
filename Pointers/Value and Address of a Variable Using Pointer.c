#include <stdio.h>

int main() {
    int x;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &x);

    ptr = &x;

    printf("Value of x = %d\n", *ptr);
    printf("Address of x = %p", ptr);

    return 0;
}
