#include <stdio.h>
void main()
{
    int n, i,  = 0;
    printf("Enter  integer: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
       f(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime no.",n);
    else
        printf("%d is not a prime no.",n);
   }
