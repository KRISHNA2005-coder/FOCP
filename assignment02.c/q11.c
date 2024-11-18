//Q11. WAP to implement Insert -Front, any position in between & end in an array.

#include <stdio.h>

void insert_front(int arr[], int *n, int value) {
    for(int i = *n; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    (*n)++;
}

void insert_position(int arr[], int *n, int value, int position) {
    for(int i = *n; i > position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = value;
    (*n)++;
}

void insert_end(int arr[], int *n, int value) {
    arr[*n] = value;
    (*n)++;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    
    printf("Array before insert: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    insert_front(arr, &n, 5);
    insert_position(arr, &n, 25, 2);
    insert_end(arr, &n, 60);
    
    printf("\n Array after insert: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}