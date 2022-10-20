#include <stdio.h>

void birthday(char[]); //function prototype

void birthday(char name[]) {
    printf("\nHappy birthday to you!");
   printf("\nHappy birthday to you!");
   printf("\nHappy birthday dear %s!", name);
   printf("\nHappy birthday to you!\n");
}

int main() {
    char name[25];
    printf("What's your name?\n");
    scanf("%s", &name);
    birthday(name);
    birthday(name);
    birthday(name);
    return 0;
}