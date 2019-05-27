#include<stdio.h>
int main(){
int number=121,input=121,reminder,sum=0;

while(number){
reminder=number%10;
sum=sum*10+reminder;
number/=10;
}

if(sum==input){
    printf("Palindrome");
}
else{
    printf("Not palindrome");
}
}
