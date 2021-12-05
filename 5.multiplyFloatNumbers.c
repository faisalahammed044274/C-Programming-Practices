#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, result;

    printf("Insert a number : ");
    scanf("%lf,", &num1);

    printf("Insert another number : ");
    scanf("%lf", &num2);

    result = num1*num2;

    printf("The result of num1*num2 is : %.2lf", result);
    return 0;
}

