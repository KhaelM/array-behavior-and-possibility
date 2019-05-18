#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[] = "hello";
    char hehe[] = "hehe";
    string[0] = 't'; // Allowed

    printf("%s", string);

    return 0;
}
