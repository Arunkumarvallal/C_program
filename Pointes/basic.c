#include<stdio.h>
int main(){
int val=200;
int *ptr;
ptr=&val;
printf("%d\n",ptr);//address in ptr that is address of val
printf("%u\n",&ptr);//address of ptr
printf("%d\n",val);//value of val
printf("%u\n",&val);//address of val
}
