// You are using GCC
#include<stdio.h>
int main(){
    int num,num2;
    scanf("%d %d",&num,&num2);
    int i,j,sum1=0,sum2=0;
    for(i=1;i<=num/2;i++){
    if(num%i==0){
      sum1=sum1+i;
    }
    }
for(j=1;j<=num2/2;j++){
    if(num2%j==0){
      sum2=sum2+j;
    }
    }

    if(sum1==num2&&sum2==num){
        printf("AMICABLE ");
    }
    else{
        printf("NOT AMICABLE ");
    }
}
