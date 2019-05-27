#include<stdio.h>
int main(){
    int num1,num2,index1=1,index2=1;
    scanf("%d %d",&num1,&num2);
    for(index1=1;index1<=num1;index1++){
        for(index2=1;index2<=num2;index2++){
            if(index1==1||index1==num2||index2==index1||index2==num2){
                printf("*");
            }
            else{
                printf(" ");
            }


        }


        printf("\n");
    }

}
