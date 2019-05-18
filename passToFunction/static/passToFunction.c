#include <stdio.h>

void fun(int arr[]) {
    printf("func &arr = %p\n", &arr);
    printf("func arr = %p\n", arr);
    arr++;
    printf("func arr = %p\n", arr);
}

int main(int argc, char const *argv[])
{
    int arr[2] = {1,2};
    printf("&arr = %p\n", &arr);
    printf("arr = %p\n", arr);
    fun(arr);
    printf("arr = %p\n", arr);

}
