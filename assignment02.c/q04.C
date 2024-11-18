//Q4. WAP to find Who & how many students have scored 99 in an array Marks.

#include <stdio.h>

int main() {
    int marks[] = {45, 99, 67, 99, 92, 99};
    int n = sizeof(marks) / sizeof(marks[0]);
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("Student at index %d scored 99.\n", i);
            count++;
        }
    }
    
    if(count == 0) {
        printf("No students scored 99.\n");
    } else {
        printf("Total students who scored 99: %d\n", count);
    }
    return 0;
}