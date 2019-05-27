#include<stdio.h>
int rev(int  num){
    int reminder,sum=0;
    while(num!=0){
        reminder=num%10;
        sum=sum*10+reminder;
        num=num/10;
    }
    return sum;
}
int  main(){
    int n;
    scanf("%d",&n);
    int reminder,sum=0;
    int num=rev(n);
    while(num!=0){
        reminder=num%10;
        if(reminder%2==0){
            printf("%d is even",reminder);
        }
        else{
            printf("%d is odd",reminder);
        }
        num=num/10;
        printf("\n");
    }
}
