#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

struct Student
{
    char name[12];
    float gpa;
};


int main() {
    struct Player player1;
    struct Player player2;
    struct Student student1 = {"Spongebob", 3.0};
    struct Student student2 = {"Patrick", 2.5};
    struct Student student3 = {"Sandy", 4.0};
    struct Student students[] = {student1, student2, student3};

    for (int i=0; i<sizeof(students)/sizeof(students[0]); i++) {
        printf("%s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    strcpy(player1.name, "Fej");
    player1.score = 4;
    strcpy(player2.name, "Jef");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
    
    return 0;
}