#include<stdio.h>
void fn(char arr,int data){

    printf("%c",arr);
    printf("%d\n",data);

}
int main(){
    int ar[]={1,2};
char arr[]={"HELLO"};
printf("%u\n",ar);
fn(arr[0],ar);

}
