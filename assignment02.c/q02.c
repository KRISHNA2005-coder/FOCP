//Q2. WAP to print grade of students as per their marks given in an array.

#include <stdio.h>

void print_grade(int marks[], int n) {
    for(int i = 0; i < n; i++) {
        if(marks[i] >= 75) {
            printf("Marks: %d, Grade: A\n", marks[i]);
        } else if(marks[i] >= 60) {
            printf("Marks: %d, Grade: B\n", marks[i]);
        } else if(marks[i] >= 40) {
            printf("Marks: %d, Grade: C\n", marks[i]);
        } else {
            printf("Marks: %d, Grade: D\n", marks[i]);
        }
    }
}

int main() {
    int marks[] = {45, 78, 89, 56, 61};
    int n = sizeof(marks) / sizeof(marks[0]);
    print_grade(marks, n);
    return 0;
}