#include <stdio.h>

int a, b;
int sum(int x, int y);

int main() {
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int c = sum(a, b);
    printf("The sum of %d and %d is %d", a, b, c);
    return 0;
}

int sum (int x, int y) {
    return x + y;
}