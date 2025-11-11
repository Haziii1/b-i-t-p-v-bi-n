#include <stdio.h>

int main() {
    int a = 268;
    float b = 8.26;
    double c = 3.1415;
    char d='H';

    printf("Kich thuoc cua int: %zu byte\n", sizeof(int));
    printf("Kich thuoc cua float: %zu byte\n", sizeof(float));
    printf("Kich thuoc cua double: %zu byte\n", sizeof(double));
    printf("Kich thuoc cua char: %zu byte\n", sizeof(char));
    return 0;
}

