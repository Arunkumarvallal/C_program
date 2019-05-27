// You are using GCC
#include<stdio.h>
#include<math.h>
long int find_count(long int num){
    long int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    return count;
}
int main(){
  long  int index,number_count,a_number=0;
    long int start,end,reminder,i;
    scanf("%ld %ld",&start,&end);
   // printf("%d",find_count(end));

    for(index=start+1;index<end;index++){
        i=index;
        number_count=find_count(i);
        while(i){
            reminder = i%10;
            a_number = a_number+pow(reminder,number_count);
            i = i/10;
        }
        if(a_number == index){
            printf("%ld ",index);
        }
        a_number = 0;
    }
}
