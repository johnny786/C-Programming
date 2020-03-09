#include<stdio.h>

main()
{
 char *ptr="ABC";
 //char *str="ABC";
 //char str[]="ABC";
 //char str[]={'A','B','C','\0'};
 
 printf("%d\n",ptr);
 printf("%p\n",*ptr);
 printf("sizeof(*ptr)=%d\n");
 return 0;
}
