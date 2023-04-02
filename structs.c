#include <stdio.h>

/**
 * struct is used to structure data in C
 */

// example one
struct student
{
    int age;
    int id;
    char grade;
};

// example two

typedef struct person
{
    int age;
    int id;
    char grade;
} person_t;

void print_student(struct student s)
{

    printf("Mike's age: %d\n", s.age);
    printf("Mike's id: %d\n", s.id);
    printf("Mike's grage: %c\n", s.grade);
}

void printing_person(person_t *person_one)
{
    // the -> deferences and accesses a field
    printf("Age: %d\n", person_one->age);
    printf("Id: %d\n", person_one->id);
    printf("Grade: %c\n", person_one->grade);
}

int main(void)
{

    struct student mike;
    mike.age = 50;
    mike.id = 1;
    mike.grade = 'A';

    print_student(mike);

    person_t person_one;
    person_one.age = 50;
    person_one.id = 10;
    person_one.grade = 'B';

    printing_person(&person_one);
}