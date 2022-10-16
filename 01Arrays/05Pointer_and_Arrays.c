#include<stdio.h>
int main() {
    int b = 10;
    int *p = &b;
    // printf("%d\n", b);
    // printf("%d\n", *p);
    // printf("%p\n", p);
    // printf("%d\n", p);
    // printf("%d\n", &b);
    // printf("%p\n", &b);
    int a[] = {1,2,3,6,5,4,2};
    int *q;                         
    q = a;              //array is a pointer itself , if we point the array using an pointer here q  will store the 0th index's element's address
    //printf("%d\n", a);  //pointer is a variable which can store the address like int *p; = means it is a pointer to an integer not an integer pointer 
                        //int *p ; = pointer is storing address of an variable and datatype of that variable is integer
                        // * = dereferencing operator , p = variable storing address of a variable , *p = points back to the value of that variable
    // printf("%p\n", a);
    // printf("%p\n", q);
    // printf("%d\n", q);
    // printf("%p\n", &a[0]);
    // printf("\n");
    // printf("%p\n", &a);
    // printf("%d\n", &a);
    // printf("%p\n", ++q);
    // printf("%d\n", q);

    // q = a+2;      //As q is a pointer pointer towards an integer q+2 not means if q is 100 q+2 = 102 it will increment it according to size of the integer that is 4
   // printf("%d\n", *(q+2));

   // IMPORTANT =  a[i] = *(a+i) = *(q+i)  //if q is pointing to array a
   // implies that *(a+i) = *(i+a) = i[a]
//    printf("%d\n", 3[a]);
 
    // printf("%d\n", q);
    //printf("%p\n", &p); //will print the address of the pointer

    // if address of a[0] = a = 100
    //then  
    // printf("%p\n", a+1);     //will give address of a[1]
    // printf("%p\n", &a+1);    //will give address of a[sizeof array]
    printf("%d\n", &a+1);
    printf("%p\n", *a+1);
    printf("%d\n", *(a+1));

    printf("Address in integer          Address in hexadecimal\n");
    for (int i = 0; i < 8; i++)
    {
        printf("    %-30d", q);
        printf("%p\n", q);
        q++;
        
    }
    
    //We can subtract or add an integer from a pointer but we cannot do adress*address and address + address, address - address


}