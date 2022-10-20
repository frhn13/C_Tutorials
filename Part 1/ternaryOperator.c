#include <stdio.h>

int main() {
    int x;
    int y;
    int max;

    scanf("%d", &x);
    scanf("%d", &y);

    max = (x>y) ? x : y;
    printf("%d", max);
    return 0;
}