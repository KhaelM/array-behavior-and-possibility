#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\n=== int ===\n");
    int arrayOfInt[3] = {1, 2, 3};
    printf("arrayOfInt = %p\n", arrayOfInt);
    printf("&arrayOfInt = %p\n", &arrayOfInt);
    printf("&arrayOfInt[0] = %p\n", &arrayOfInt[0]);
    printf("&arrayOfInt[1] = %p\n", &arrayOfInt[1]);
    printf("&arrayOfInt[2] = %p\n", &arrayOfInt[2]);

    printf("\n=== uint ===\n");
    int arrayOfUint[3] = {1, 2, 3};
    printf("arrayOfUint = %p\n", arrayOfUint);
    printf("&arrayOfUint = %p\n", &arrayOfUint);
    printf("&arrayOfUint[0] = %p\n", &arrayOfUint[0]);
    printf("&arrayOfUint[1] = %p\n", &arrayOfUint[1]);
    printf("&arrayOfUint[2] = %p\n", &arrayOfUint[2]);


    printf("\n=== char ===\n");    
    char arrayOfChar[3] = {1, 2, 3};
    printf("arrayOfChar = %p\n", arrayOfChar);
    printf("&arrayOfChar = %p\n", &arrayOfChar);
    printf("&arrayOfChar[0] = %p\n", &arrayOfChar[0]);
    printf("&arrayOfChar[1] = %p\n", &arrayOfChar[1]);
    printf("&arrayOfChar[2] = %p\n", &arrayOfChar[2]);

    printf("\n=== float ===\n");    
    float arrayOfFloat[3] = {1.123f, 2.456f, 3.789f};
    printf("arrayOfFloat = %p\n", arrayOfFloat);
    printf("&arrayOfFloat = %p\n", &arrayOfFloat);
    printf("&arrayOfFloat[0] = %p\n", &arrayOfFloat[0]);
    printf("&arrayOfFloat[1] = %p\n", &arrayOfFloat[1]);
    printf("&arrayOfFloat[2] = %p\n", &arrayOfFloat[2]);


    printf("\n=== double ===\n");
    double arrayOfDouble[3] = {1.123456, 2.456789, 3.789123};
    printf("arrayOfDouble = %p\n", arrayOfDouble);
    printf("&arrayOfDouble = %p\n", &arrayOfDouble);
    printf("&arrayOfDouble[0] = %p\n", &arrayOfDouble[0]);
    printf("&arrayOfDouble[1] = %p\n", &arrayOfDouble[1]);
    printf("&arrayOfDouble[2] = %p\n", &arrayOfDouble[2]);

    return 0;
}
