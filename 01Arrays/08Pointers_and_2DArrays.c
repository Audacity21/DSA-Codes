#include<stdio.h>
void main() {
    int a[3][3] = {1,11,3,4,5,6,7,8,9};
    int *p; 
    int *s;
    int q;
    // Here if we write p = a; this will be wrong, it will only work in case of 1-D arrays .Here as it is a 2-D array it will be storing address of the array{1,11,13} which is wrong as p is a pointer to an integer
    p = &a[0][0];
    s=a[0];
    //p=a[0]; is also correct as a[0] is the array {1,11,3} and a[0] will contain the address to its first variable that is 1 but p=a[0][0] is wrong as a[0][0] = 1 will is an integer value and p can only store address of an integer variable.
    //or we can print &a as it will store the base address of the entire array
    printf("%u\n", &a); 
    printf("%p\n", p);
    // %p for hexadecimal format and %u for integer format
    printf("%u\n", p);
    printf("%p\n", s);
    printf("%p\n", p+3);
    printf("%p\n", s+3);
    printf("Inputted array : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(a+i)+j));
        }
        
    }
    printf("\n");
    printf("%d\n", **a);
    printf("%d\n", **a);
    

    // printf("%d\n", p);
    // printf("%d\n", a);
    // printf("%d\n", a+1);
    // printf("%d\n", &a[0][1]);
    // printf("%d\n", &a[1][0]);
    // printf("%d\n", **(a+1));
    // printf("%d\n", *(&a[0]+1));
}

//a[3][3] = {1,11,3,4,5,6,7,8,9};
//name of the array returns address of first element in the array that (here a[0] = {1,11,3} and a will return the address of 1)
//a+1 will mean it will return address to the second element of the 2-D array that is address of 4 in a[1] = {4,5,6}
//a+i = &a[i]  , &a[i] will also return the base address of the array in ith position of a 2-D array
// 1st element of the array is also an array here

// *(a+1) , a is storing the address of first element of the array but if it is also an array then it will store the base address of that array like here a+1 will store the address of second element of the array and *(a+1) will dereference to the second element of the array but here the second element is an array itself means it will 
// store the value of an array means storing base address of that array. So it will return value of 2nd element if array is 1-D and will return base address of the array in 2nd position if its a 2-D array.
//here a[i] = &a[i][0]
// *(a+1) + 2 = here *(a+1) will store the base address of the array {4,5,6} and *(a+1)+2 will store address of 6
// now to print the value a[1][2] we will again use dereferencing operator i.e. , *(*(a+1)+2)
// a[i][j] = *(*(a+i)+j) = *(a[i]+j) as *(a+1) = a[i]
//*(*a + 1) = *a will return the base address of the first element(1-D array) of this 2-D array that is address of 1 and (*a + 1) will be returning address of 11 so *(*a+1) will return the value 11
// &a+1 != a+1 as a is pointing to the base address of the 1-D array {1,11,3} i.e. , 1 and by pointer arithmetic *a+1 will point to 11 and &a is storing the base address of the whole array so &a+1 will point to the next address after 9
