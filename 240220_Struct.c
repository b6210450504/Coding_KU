#include <stdio.h>
#include <string.h>

typedef double centimetre;

typedef struct __STUDENT__{
    char name[100];
    double score;
} Student;

void print_student(Student stu){
    printf("%s: %.2f\n",stu.name,stu.score);
    stu.score=0;
}

void add_score(Student* stu, double score){
    stu->score+=score;
}

int main() {
    Student magikarp_a={"KA_MAGIKARP_C",50.0}, magikarp_main={"KA_MAGIKARP_A",200.0}, magikarp_b={"KA_MAGIKARP_B",100.0};
    Student to,chat;
    Student student[10];
    Student* sp = &magikarp_main;

    //to.name = "TOTO"; can't do this
    strcpy(to.name, "TOTO");
    to.score = 90.79;

    printf("nani %s: %.2f\n",magikarp_main.name,magikarp_main.score);

    double length = 12.34;
    print_student(magikarp_main);
    print_student(to);
    add_score(&to,10);
    print_student(to);

    return 0;
}
