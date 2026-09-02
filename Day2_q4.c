#include <stdio.h>

int main() {
    float radius;
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;
    printf("Area=%.2f, Circumference=%.2f", area, circumference);
    return 0;
}