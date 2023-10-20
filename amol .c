# include <stdio.h>

int num1 = 10;
void main()
{
   int num2 = 5;
   int* num1ptr = &num1;
   int* num2ptr = &num2;
   printf("%d\n”,num1);
   printf("%d\n”,num2);
   printf("%p\n”,num1ptr);
   printf("%p\n”,num2ptr);
  
}