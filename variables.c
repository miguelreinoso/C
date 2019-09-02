#include <stdio.h>

int main() {
  int a, b;
  float salary = 56.23;
  char letter = 'Z';
  a = 8;
  b = 34;
  int c = a+b;
                             /* format specifiers :  %d  'decimal'
                                                     %f  'float'
                                                     %c  'char'    */
  printf("%d \n", c);       
  printf("%f \n", salary);                       
  printf("%c \n", letter);                        

  return 0;
}