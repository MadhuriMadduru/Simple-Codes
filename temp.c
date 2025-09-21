#include<stdio.h>
int main()
{
    float a, b, sum,sub, multiplication, division;
    printf("Enter first temperature", a);
    scanf("%f", &a);
    printf("Enter second temperature", b);
    scanf("%f", &b); 
    sum=a+b;
    sub=a-b;
    multiplication=a*b;
    division=a/b;
    printf("Sum of two temperatures: %.2f\n",a+b);
    printf("Sub of two temperatures: %.2f\n",a-b);
    printf("multiplication of two temperatures: %.2f\n",a*b);
    printf("division of two temperatures: %.2f\n",a/b);
    return 0;
}