#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, result;

    printf("Insert first integer : ");
    scanf("%d",&x);
    printf("Insert Second integer : ");
    scanf("%d",&y);

    result = x + y;

    printf("The sum of x and y is : %d ", result);

    return 0;
}
