#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amt, rate, time, result;

    printf("insert the Principle Amount : ");
    scanf("%d", &amt);

    printf("Insert the Rate : ");
    scanf("%d", &rate);

    printf("Insert the Time : ");
    scanf("%d", &time);

     result = (amt*rate*time)/100;

     printf("The simple Interest result is : %d", result);

    return 0;
}
