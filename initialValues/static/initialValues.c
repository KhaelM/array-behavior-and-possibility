#include <stdio.h>

int globalArrayOfInt[10];

int main(int argc, char const *argv[])
{
    int arrayOfInt[10];
    static int staticArrayOfInt[10];

    for (int i = 0; i < 10; i++)
    {
        printf("%i,", arrayOfInt[i]);
    }
    
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%i,", staticArrayOfInt[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%i,", globalArrayOfInt[i]);
    }
    

    return 0;
}
