#include<stdio.h>
main()
{
	char a[100],b[100];
	 
	 printf("enter first string:");
	 gets(a);
	  printf("enter second string:");
	 gets(b);
	 
	char c[100];
	
	strcpy(c,strcat(a,b));
	
	puts(c);	
	
	
}
