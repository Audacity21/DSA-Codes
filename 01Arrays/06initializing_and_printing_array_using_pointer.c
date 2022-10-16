#include<stdio.h>
void main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    int *q = a;

    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a+i);   //you can write here &a[i], or &i[a] or &q[i] or &a+i or a+i
    }

    printf("Entered array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));   //Here can also write *(q+i), *(a+i), i[a], i[q]
    }
    
    
}