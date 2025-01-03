#include <stdio.h>

void fact(int *n) {

    *n *= 3;
    printf("User defined function - %d\n", *n);
}

int main() {

    int n = 5;

    printf("Main function: %d\n", n);

    fact(&n);

    printf("Main function: %d\n", n);

    return 0;
}
