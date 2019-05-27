#include<stdio.h>
int main(){
    int num,num2,i,j;
    scanf("%d %d",&num,&num2);
    for(i=1;i<=num;i++){

       for(j=1;j<i;j++){
            printf(" ");
        }

        for(j=1;j<=num2;j++){

            printf("*");
        }

       printf("\n");
    }
}
