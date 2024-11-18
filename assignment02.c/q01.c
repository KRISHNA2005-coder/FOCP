#include <stdio.h>

int main() {
    int marks[] = {45, 78, 89, 56, 61};
    int n = sizeof(marks) / sizeof(marks[0]);
    
    
    for(int i = 0; i < n; i++) {
        marks[i] += 5;
    }
    
    
    printf("Updated Marks: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }
    return 0;
}

