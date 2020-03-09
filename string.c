#include<stdio.h>

main()
{
 char *ptr="ABC";
 
 printf("%d\n",ptr);
 printf("%p\n",*ptr);
 printf("sizeof(*ptr)=%d\n");
 return 0;
}
