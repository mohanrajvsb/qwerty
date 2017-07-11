#include <stdio.h>
#include <conio.h>
void main() {
	char *a;
	int i,len,f=0;
	clrscr();
	printf("\n STRING: ");
	gets(a);
	len=strlen(a);
	for (i=0;i<len;i++) {
		if(a[i]==a[len-i-1])
		     f=f+1;
	}
	if(f==len)
	             printf("\n PALINDROM"); 
               else
	             printf("\n NOT PALINDROM");
	}
