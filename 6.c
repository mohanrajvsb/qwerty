#include <stdio.h>
#include <stdlib.h>
 void main()
{
    int n1, n2, i, j, flag, temp, c = 0;
     printf("Enter the value of n1 and n2 \n");
    scanf("%d %d", &1, &n2);
    if (n2 < 2)
    {
        printf("There are no primes upto %d\n", n2);
        exit(0);
    }
    printf("Prime numbers are \n");
    temp = n1;
    if ( n1 % 2 == 0)
    {
        n1++;
    }
    for (i = n1; i <= n2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
            c++;
        }
    }
    printf("Number of primes between %d & %d = %d\n", temp, n2, c);
}
