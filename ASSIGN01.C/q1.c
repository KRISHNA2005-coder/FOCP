#include <stdio.h>
#include <math.h>
int armstrong(int num){
    int sum=0,rem,count=0,store;
    store=num;
    while(store!=0){
        store/=10;
        count++;
    }
    store=num;
    while(store!=0){
        rem=store%10;
        sum+=pow(rem,count);
        store/=10;

    }
    return(sum==num);

}

int main(){
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    if(armstrong(num)){
        printf("no is armstrong");
    }
    else{
        printf("no is not armstrong");
    }
return 0;
}
