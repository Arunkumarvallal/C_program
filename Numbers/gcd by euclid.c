// You are using GCC
#include<stdio.h>
int main(){
    int divisor,dividend,reminder;
    scanf("%d %d",&dividend,&divisor);
    while(divisor!=0){
        reminder=dividend%divisor;
        dividend=divisor;
        divisor=reminder;
    }
    printf("%d",dividend);
}
