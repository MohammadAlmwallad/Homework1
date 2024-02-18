#include <stdio.h>


typedef struct {
    char name[50];
    int grade;
} Student;

int main() {
    Student students[10]; 
    int i;

    
    printf("Enter names and grades of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d Name: ", i + 1);
        scanf("%49s", students[i].name); 
        printf("Student %d Grade: ", i + 1);
        scanf("%d", &students[i].grade);
    }

    
    printf("\nNames and Grades of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s, Grade: %d\n", students[i].name, students[i].grade);
    }

    return 0;
}
