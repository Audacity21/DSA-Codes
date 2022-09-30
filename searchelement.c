#include <stdio.h>
 
int main() {
   int nbr, i, r, arr[30];
 
   printf("Enter the number of elements in the array: ");
   scanf("%d", &nbr);
 
   printf("Enter the array elements: ");
   for (i = 0; i < nbr; i++) {
      scanf("%d", &arr[i]);
   }
 
   printf("Enter the item to be searched: ");
   scanf("%d", &r);
 
   //Research starts from the index 0
   i = 0;
   while (i < nbr && r != arr[i]) {
      i++;
   }
 
   if (i < nbr) {
      printf("The element is found in the position = %d", i + 1);
   } else {
      printf("Element not found!");
   }
 
   return 0;
}
