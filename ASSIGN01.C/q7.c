q7

#include <stdio.h>

void dectobin(int x){
    if(x>1){
        dectobin(x/2);
    }
    printf("%d",x%2);
}

int bintodec(int x){
    int temp=x,base=1,remainder,num=0;
    while(temp>0){
        remainder=temp%10;
        num=num+remainder*base;
        temp/=10;
        base*=2;
    }
    return num;
}

int main() {
    int choice, num, x, y;
    printf("\n Enter 1 if you want to convert decimal to binary  \n  Enter 2 if you want to convert binary to decimal: ");
    scanf("%d", &choice);
    
    if (choice==1){
        printf("Enter the number  want to convert: ");
        scanf("%d",&num);
        dectobin(num);
        printf("\n"); 
    } else if(choice==2){
        printf("Enter the number want to convert: ");
        scanf("%d",&x);
        y=bintodec(x);
        printf("%d\n",y); 
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}