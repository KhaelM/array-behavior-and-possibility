#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *string = "hello";
    /* 
        Not allowed
        string[0] = 't';
    */    

    printf("%s\n", string++);


    return 0;
}
