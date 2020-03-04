#include <stdio.h>

int main()
{
    int a =2;
    int b = 3;
    printf("\nReal Value Of A & B : %d %d",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter Value Swap A & B : %d %d",a,b);
    return 0;
}
