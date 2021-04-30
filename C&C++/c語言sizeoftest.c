#include<stdio.h>

int main()
{
    int v[3] = {1, 2, 3};
    printf("size of :%zu\n", sizeof(int)); // int 記憶體大小bits
    printf("size of :%zu\n", sizeof(v[0])); // 記憶體大小bits
    printf("size of :%zu\n", sizeof(v)); // 4 * 3 = 12 記憶體大小bits
    printf("size of length:%zu\n", sizeof(v) / sizeof(v[0])); // 12 / 4 =3

    return 0;
}