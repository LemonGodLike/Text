#include <stdio.h>
#include <windows.h>
int main()
{
   int a = 4;
   int b = 2;
   int c ;
   c = a + b;
   printf("a+b,c的值是 %d\n", c );
   c = a - b;
   printf("a-b,c的值是 %d\n", c );
   c = a * b;
   printf("a*b,c的值是 %d\n", c );
   c = a / b;
   printf("a/b,c的值是 %d\n", c );
   system("pause");
   return 0;
}