#include<stdio.h>

void main() {
    int a[50], size, i, pos, item, J;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    if (size > 50)  
    {
        printf("Overflow Condition.\n"); 
    }

    else {
        printf("Enter elements of array : ");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        
        printf("Enter the position where to insert and the item to insert seperated by spaces : ");
        scanf("%d%d", &pos, &item);

        if (pos <= 0 || pos > size+1)
        {
            printf("Invalid position");
        }
        
        //Method-1
        J = size-1;
        while(J >= pos-1) {
            a[J+1] = a[J];
            --J;
        }
        a[pos-1] = item;

        //Method-2
        // for (i = size-1 ; i >= pos-1; i--)
        // {
        //     a[i+1] = a[i];
        // }
        
        // a[pos-1] = item;

        //As the array we are inserting on is unsorted , best algo. we can use -
        // a[size] = a[pos-1];
        // a[pos-1] = item;
        size = size + 1;

        printf("After inseting %d in %d position , array is : ", item, pos);
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
        
    }
    
    
}