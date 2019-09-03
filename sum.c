#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b); /* scanf() scans input that matches format specifiers */
                                   /* '&' is the memory adress operator */
  printf("\nSum: %d\n", a+b);

  return 0;
}