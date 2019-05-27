// You are using GCC
#include<stdio.h>
int main(){
    int arr[1000],element,ctr=0,index=0;
    scanf("%d",&element);
    for(index=0;index<element;index++){
        scanf("%d ",&arr[index]);
        if(arr[index]==0)
            ctr++;
    }

   // printf("\n%d",ctr);
    for(index=0;index<ctr;index++)
        printf("0 ");
    for(index=0;index<(element-ctr)-1;index++)
        printf("1 ");
        printf("1");
}
