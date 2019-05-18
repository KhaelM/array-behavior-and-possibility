#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("\n=== int ===\n");
    int* arrayOfInt = (int*) malloc(3 * sizeof(int));
    *(arrayOfInt + 0) = 1;
    *(arrayOfInt + 1) = 2;
    *(arrayOfInt + 2) = 3;

    printf("arrayOfInt = %p\n", arrayOfInt);
    printf("&arrayOfInt = %p\n", &arrayOfInt);
    printf("&arrayOfInt[0] = %p\n", &arrayOfInt[0]);
    printf("&arrayOfInt[1] = %p\n", &arrayOfInt[1]);
    printf("&arrayOfInt[2] = %p\n", &arrayOfInt[2]);

    free(arrayOfInt);

    return 0;
}
