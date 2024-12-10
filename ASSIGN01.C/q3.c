#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    y=(~y) + 1; 
    while (y!=0){
        int shift=x&y;
        x=x^y;
        y=shift<<1;
    }
    printf("The difference is: %d", x);
    return 0;
}