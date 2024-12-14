/*Given the value of three floating-point numbers a, b, and c write a program in C to find whether or not
it is possible to create a triangle holding three sides of lengths a, b, and c.*/



#include <stdio.h>

 int main(void)


 {
     float a,b,c;
     printf("ENTER THE VALUE OF a,b,c: ");
     scanf("%d %d %d",  &a,&b,&c);

     if (a+b>c || b+c>a || c+a>b)
        {
            printf("YES");
        }
     else
     {
         printf("NO");
     }












     return 0;
 }
