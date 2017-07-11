
#include <stdio.h>

int power(int n1, int n2);

void main()
{
    int b, p, result;
    printf("Enter base number: ");
    scanf("%d",&b);
    printf("Enter power number(positive integer): ");
    scanf("%d",&p);
    result = power(b, p);
    printf("%d^%d = %d", base, p, result);
  }

int power(int b, int p)
{
    if (powerRaised != 0)
        return (b*power(b, p-1));
    else
        return 1;
}
