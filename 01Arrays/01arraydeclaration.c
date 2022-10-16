#include<stdio.h>
void main() {
    int a[5] = {1,2,3};
    // int b[5] = {1,2,3,4,5,6,7};

    // printf("%d", b[4]);
    int c[5];
    for(int i=1; i<6; i++){
        scanf("%d", &c[i]);
    }

    for(int i=1; i<6; i++){
        printf("%d ", c[i]);
    }

    printf("\n%d", c[0]);

}