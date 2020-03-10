#include<stdio.h>

void main()
{
 char *name="johnny";
int score=100;

printf("Hello %s,your result is %d\n",name,score);

printf("Debug:The string and int are stored at:%p and %p \n ",name,score);
}
