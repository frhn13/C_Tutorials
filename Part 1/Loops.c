#include <stdio.h>

int main() {
    char name[25];

    for (int i=1; i<=10; i++) {
        printf("%d\n", i);
    }

    printf("What's your name?");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

// while loop = checks a condition, THEN executes a block of code if condition is true
// do while loop = always executes a block of code once, THEN checks a condition
    while (strlen(name)==0) {
        printf("You didn't enter your name");
        printf("What's your name?");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }
    printf("Hello %s", name);
    return 0;
}