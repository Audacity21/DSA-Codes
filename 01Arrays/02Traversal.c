//Runtime time initialization - Using runtime initialization user can get a chance of accepting or entering different values during different runs of program.
// It is also used for initializing large arrays or array with user specified values. An array can also be initialized at runtime using scanf() function.
#include<stdio.h>

void main() {
    int a[50];  //Memory manager or in RAM as the datatype is integer 4byte(in typical compilers) is gonna be taken = 4*50 = 200bytes
    int size;   //Allowing user to enter the size of array

    printf("Enter the array size : ");
    scanf("%d", &size);

    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Elements in the array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
}


//Compile time initilization - In compile time initialization, user has to enter the details in the program itself.
//Compile time initialization is same as variable initialization.


#include<stdio.h>

void main() {
    int a[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
}