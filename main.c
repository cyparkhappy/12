#include <stdio.h>
#include <string.h>

struct student {
    int ID;
    char name[10];
    float grade;
};

int main(void) {
    struct student s1 = {24, "cyp", 4.0};

    s1.ID = 2416566;
    strcpy(s1.name, "chaeyun");
    s1.grade = 4.3;

    printf("ID : %i\n", s1.ID);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.grade);

    return 0;

}