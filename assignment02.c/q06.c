//Q6. WAP to find average score of the Marks array.

#include <stdio.h>

int main() {
    int marks[] = {45, 78, 89, 56, 61};
    int n = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    
    float avg = (float)sum / n;
    printf("Average score: %.2f\n", avg);
    return 0;
}