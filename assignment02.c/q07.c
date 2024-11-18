//Q7 WAP to check whether score is even or odd in an array.

#include <stdio.h>

int main() {
    int marks[] = {45, 78, 89, 56, 61};
    int n = sizeof(marks) / sizeof(marks[0]);
    
    for(int i = 0; i < n; i++) {
        if(marks[i] % 2 == 0) {
            printf("Marks: %d is Even\n", marks[i]);
        } else {
            printf("Marks: %d is Odd\n", marks[i]);
        }
    }
    return 0;
}