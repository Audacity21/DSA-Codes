// int a[m][n];          means we are declaring an array a with m no. of rows and n no. of columns
                        //or an array containing m no. of array elements having size n == [2D-Array]an array of arrays
//Compile time initialization
// #include<stdio.h>
// void main() {
//     int a[2][3] = {{1,2,3},{4,5,6}}; //As size of the array is 3*2 = 6 means 4*6 = 24 bytes of space would be allocated to this array
//     int a[2][3] = {1,2,3,4,5,6};
//     int a[][3] = {1,2,3,4,5,6};    //writing no. of rows is optional but you have to write the no. of columns
// }
//Implementation of 2-D arrays in memory = 1. Row major  2. Column major
//1.For a 2D array of size mn ,in row major form, Loc(j,k) = BaseAdd(a[0]) + W*(n*(j-1)+(k-1)) , where W = sizeof(datatype of array)
//1.For a 2D array of size mn ,in column major form, Loc(j,k) = BaseAdd(a[0]) + W*(m*(k-1)+(j-1))


//Run time initialization
#include<stdio.h>
void main() {
    int m, n;
    printf("Enter the matrix as 'row column' : ");
    scanf("%d%d", &m, &n);
    int a[m][n];

    printf("Enter elements : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered array :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}