
#include <stdio.h>
int  main(){
    int rows;
    printf("enter n: ");
    scanf("%d",&rows);
for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
    printf("%d",j%2);
}
for(int n=0;n<(rows-i-1)*2;n++){
 printf(" ");
    }
    for(int j=0;j<=i;j++){
    printf("%d",j%2);
 }
printf("\n");
}
    return 0;
}