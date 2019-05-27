// You are using GCC
#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==0||j==0||i==row-1||j==col-1){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
}


//row=5
//col=5

//11111
//00000
//11111
//00000
//11111

