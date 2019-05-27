#include<stdio.h>
int main(){
int v[3]={1,100,20};
int *ptr=&v;
printf("%d\n",*ptr);
printf("%d\n",*(ptr+1));
//printf("%d\n",*ptr);

}
