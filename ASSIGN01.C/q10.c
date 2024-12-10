
#include <stdio.h>

int main(){
    int rows;
    printf("enter rows: ");
    scanf("%d",&rows);

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i-1;j++){
            printf(" ");
        }
        int num=1;
        for(int j = 0; j <= i; j++){
            printf("%d ",num);
            num=num*(i-j)/(j+1); 
        }
        printf("\n");
    }
}