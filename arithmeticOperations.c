#include <stdio.h>

void main() {
  int a, b, sum, dif, prod, rem;
  double quot;
    
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
    
  sum = a + b;
  dif = a - b;
  prod = a * b;
  quot = (float)a / b;
  rem = a % b;
    
  printf("\nSum = %d", sum);
  printf("\nDifference = %d", dif);
  printf("\nProduct = %d", prod);
  printf("\nQuotient = %lf", quot);
  printf("\nRemainder = %d", rem);
}
