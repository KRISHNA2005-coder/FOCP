//Q8. WAP to find maximum & minimum score in the Marks array.

#include <stdio.h>

int main() {
    int marks[] = {45, 78, 89, 56, 61};
    int n = sizeof(marks) / sizeof(marks[0]);
    int max = marks[0], min = marks[0];
    
    for(int i = 1; i < n; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
        if(marks[i] < min) {
            min = marks[i];
        }
    }
    
    printf("Maximum score: %d, Minimum score: %d\n", max, min);
    return 0;
}