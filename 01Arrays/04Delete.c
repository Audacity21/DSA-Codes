#include<stdio.h>

void main() {
    int  a[50], size, i, pos, item, J;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    if (size > 50)  
    {
        printf("Out of bound.\n"); 
    }

    else {
        printf("Enter elements of array : ");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        
        printf("Enter the position where to delete : ");
        scanf("%d", &pos);

        if (pos <= 0 || pos > size)
        {
            printf("Invalid position");
        }

        else {
            printf("Array after deleting %d from position %d : ", a[pos-1], pos);
            // for ( i = pos-1; i < size-1 ; i++)
            // {
            //     a[i] = a[i+1];
            // }
            // size--;
            // for ( i = 0; i < size; i++)
            // {
            //     printf("%d ", a[i]);
            // }

            //As the array we are dealing with is unsorted we can write best algorithm as -
            a[pos-1] = a[size-1];
            size--;
            for ( i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }

        }

    }
}