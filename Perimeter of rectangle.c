#include <stdio.h>
int main() {
    float length, width;
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    printf("Perimeter = %.2f\n", 2 * (length + width));
    return 0;
}
