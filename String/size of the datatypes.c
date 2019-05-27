// You are using GCC
#include<stdio.h>
int main(){
    char al;
    int num;
    float n;
    double number;
    scanf("%c %d %f %lf",&al,&num,&n,&number);
    printf("Sizeof char: %ld \n",sizeof(al));
    printf("Sizeof int: %ld \n",sizeof(num));
    printf("Sizeof float: %ld \n",sizeof(n));
    printf("Sizeof double: %ld \n",sizeof(number));
}
