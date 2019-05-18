#include <stdio.h>

int main(int argc, char const *argv[])
{
    int test[50] = {0,1,2,[10] = 50, 11, 12, [47] = 47, 48, 49};
    for (int i = 0; i < 50; i++)
    {
        printf("test[%i] = %i && &test[i] = %p\n", i, test[i], &test[i]);
    }
    
    return 0;
}
