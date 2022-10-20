#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;

    float z = x/ (float) y;
    int v = x%y;

    printf("%.1f\n", z);
    printf("%d", v);
    return 0;
}