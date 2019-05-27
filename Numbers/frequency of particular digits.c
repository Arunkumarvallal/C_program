#include<stdio.h>
#define size 10
int main(){
long long int num;
int arr[size],reminder,n;
scanf("%lld %d",&num,&n);
for(int i=0;i<size;i++){
    arr[i]=0;
}
while(num!=0)
{
    reminder=num%10;
    num=num/10;
    arr[reminder]++;
}
for(int i=0;i<size;i++){
    if(i==n){
    printf("%d\n",arr[i]);
}
}
}
