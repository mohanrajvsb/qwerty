#include <stdio.h>
int main()
{
    int n, revdNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
        revNum = revNum*10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %d", revNum);
    return 0;
}
