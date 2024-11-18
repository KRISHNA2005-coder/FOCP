//Q10. WAP to count prime numbers in an array.

#include <stdio.h>

int prime(int num) {
    
    for(int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(prime(arr[i])) {
            count++;
        }
    }
    
    printf("Count of prime numbers: %d \n", count);
    return 0;
}