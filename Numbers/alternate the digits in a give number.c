#include<stdio.h>
#include<string.h>
int main(){
    int num;
    while(scanf("%2d",&num)>0){
        while(num!=0){
        printf("%d",num%10);
        num=num/10;
        }
        }
    }

