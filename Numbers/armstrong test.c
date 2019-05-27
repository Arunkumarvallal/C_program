#include<stdio.h>
#include<math.h>


int main()  {
int in=153;
int reminder,s=0;
while(in){
    reminder=in%10;
    s=s+pow(reminder,3);
    in=in/10;
 printf("%d\n",s);
}
}
