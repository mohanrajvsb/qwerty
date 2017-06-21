#include <stdio.h>
 void main()
{
  char ch;
   printf("Enter a ch\n");
  scanf("%c", &ch);
   if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    printf("%c is a vow.\n", ch);
  else
    printf("%c is not a vow\n", ch);
 }
