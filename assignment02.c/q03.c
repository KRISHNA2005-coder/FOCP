//Q3. WAP to find who scored first “99” in an array marks.

#include <stdio.h>

int main() {
    int marks[] = {45, 99, 67, 89, 99, 92};
    int n = sizeof(marks) / sizeof(marks[0]);
    
    for(int i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("First 99 is scored by student at index %d\n", i);
            return 0; 
        }
    }
    printf("No student scored 99\n");
    return 0;
}