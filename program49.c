#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 3 == 0 && n % 5 == 0) printf("Divisible by both\n");
    else printf("Not divisible by both\n");
    return 0;
}