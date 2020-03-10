#include<stdio.h>

int main()
{
 int a,b,c;
 
 printf("enter a,b values:",a,b);
 scanf("a=%d \n b=%d\n",&a,&b);
 
 if(b>a)
 {
   c=a+b;
   printf("c=%d\n",c);
   }
   else
   {
    c=a-b;
    printf("c=%d\n",c);
   }
return 0;
}
