//Q5. WAP to find sum of all scores in Marks array.

#include <stdio.h>

int main() {
    int marks[] = {45, 78, 89, 56, 61};
    int n = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    
    printf("Sum of all marks: %d\n", sum);
    return 0;
}