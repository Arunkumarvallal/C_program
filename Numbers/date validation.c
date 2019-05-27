#include <stdio.h>
#include<limits.h>
int main()
{
   int dd;
   int mm;
   int yy;
   scanf("%d/%d/%d",&dd,&mm,&yy);

if(yy>=0){

    if(mm<=12){

        if((dd>=1 && dd<=31)&& (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)){
                printf("Valid");

        }
        else if((dd>=1 &&dd<=30) &&(mm==4 || mm==6 || mm==9 || mm==11 ))
        {
                printf("Valid");


        }
        else if((dd>=1 &&dd<=29) && (mm==2)&&((yy%4==0)|| (yy%4==0) && (yy%100!=0))){
                printf("Valid");

        }
        else if((dd>=1 &&dd<=28) && (mm==2) &&((yy%4==0) && (yy%100==0)))
        {

    printf("Valid");

        }
        else{
            printf("Invalid");
        }

    }
    else{
           printf("Invalid");

    }

}
else{

        printf("Invalid");

}

}
