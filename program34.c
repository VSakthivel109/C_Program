#include <stdio.h>
int main() {
    int n = 456;
    printf("Tens: %d\n", (n / 10) % 10);
    printf("Units: %d\n", n % 10);
    return 0;
}