#include<stdio.h>
int main(){
    int num,index,temp;
    scanf("%d",&num);
    for(index=0;index<num;index++){
        for(temp=0;temp<num;temp++){
            printf("*");
        }
        printf("\n");
    }

}
