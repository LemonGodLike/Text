#include <stdio.h>
#include <windows.h>
int main()
{
   int a = 4;
   int b = 2;
   int c ;
   c = a + b;
   printf("a+b,c��ֵ�� %d\n", c );
   c = a - b;
   printf("a-b,c��ֵ�� %d\n", c );
   c = a * b;
   printf("a*b,c��ֵ�� %d\n", c );
   c = a / b;
   printf("a/b,c��ֵ�� %d\n", c );
   system("pause");
   return 0;
}