#include <stdio.h>

int main() {

    char name[25];
    char* name2="fwe";
    int age;


    printf("%c", name[1]);
    printf("What's your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    printf("How old are you?\n");
    scanf("%d", &age);
    
    printf("Hello %s\n", name);
    printf("You are %d years old", age);
    return 0;
}