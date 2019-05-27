#include<stdio.h>
int pali(int num){
    int reminder,sum=0;
    while(num!=0){
        reminder=num%10;
        if(reminder%2==0){
            sum=sum*10+reminder;
         }
        num=num/10;
    }
    return sum;
}
int rev(int num){
    int reminder,sum=0;
    while(num!=0){
        reminder=num%10;
            sum=sum*10+reminder;
        num=num/10;
    }
    return sum;
}
int odd(int num){
    int reminder,sum=0;
    while(num!=0){
        reminder=num%10;
        if(reminder%2!=0){
            sum=sum*10+reminder;
         }
        num=num/10;
    }
    return sum;
}
int  main(){
    int num,temp,sum2;
    scanf("%d",&num);
   int reverse;
    temp=pali(num);
    printf("%d\n",temp);
    reverse=rev(temp);

printf("%d",reverse);

sum2=odd(num);


printf("%d",rev(sum2));


}
