#include <stdio.h>
void main()
{
    int n, revNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
        revNumber = revNumber*10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %d", revNumber);
}
