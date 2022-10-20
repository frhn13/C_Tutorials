#include <stdio.h>

enum Day{Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fri=6, Sat=7};

int main() {
    enum Day today = Sun;
    printf("%d\n", today);
    if (today==Sun || today==Sat) {
        printf("It's the weekend! Party time!");
    }
    else {
        printf("I have to work.");
    }
    return 0;
}