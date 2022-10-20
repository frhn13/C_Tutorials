#include <stdio.h>

int main() {
    double prices[] = {5.0, 10.0, 15.0, 20.0, 30.0};
    for (int x=0; x<(sizeof(prices)/sizeof(prices[0])); x++) {
        printf("%.2lf\n", prices[x]);
    }
    int numbers[3][3] = {{1,2,3}, {4,5,6}};
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            printf("%d\n", numbers[i][j]);
        }
    }
    return 0;
}