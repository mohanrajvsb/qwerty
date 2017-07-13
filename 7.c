#include <stdio.h>
int main()
{
    int number, ooriNum, rem, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
   oriNum = number;

    while (oriNum != 0)
    {
        rem = oriNum%10;
        result += rem*rem*rem;
        oriNum /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
