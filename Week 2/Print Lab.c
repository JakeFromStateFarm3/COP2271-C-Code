#include <stdio.h>
#include <math.h>
int main(void) {
    char* grade = "";
    int id_Num = 0;
    int age = 0;
    int grade1 = 0;
    int grade2 = 0;
    int grade3 = 0;
    float grade_Average = 0;
    printf("Please input your Grade letter (A|B|C|D|F)\n");
    scanf("%s", &grade);
    printf("Print your Student ID:\n");
    scanf("%d", &id_Num);
    printf("Print your Age:\n");
    scanf("%d", &age);
    printf("Print three of your course grades. Press enter after adding each one:\n");
    scanf("%d", &grade1);
    scanf("%d", &grade2);
    scanf("%d", &grade3);
    if (grade > 96){
        grade = grade-32;
    }
    grade_Average =((grade1 + grade2 + grade3)/3);
    printf("Student Rating: %c", grade);
    printf("\nStudent ID: %d", id_Num);
    printf("\nStudent Age: %d", age);
    printf("\nAverage Grade: %.2f", grade_Average);
    printf("\n%d", age);
    printf("\n   %d", age);
    printf("\n000%d", age);
    printf("\n");
}