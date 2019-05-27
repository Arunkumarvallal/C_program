// You are using GCC
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int i,sum=0;
    for(i=1;i<=num/2;i++){
    if(num%i==0){
      sum=1;
    }
    }
    if(sum==1){
    printf("PRIME");
}else{
        printf("NOT PRIME");
}

}
