#include<stdio.h>

int leapcount(int yy){
    if(yy%4==0){
        if(yy%100==0){
            if(yy%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}

int days(int mm,int leap){
    if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10)
        return 31;
    else if(mm==4||mm==6||mm==9||mm==11)
        return 30;
    else if(mm==2){
            if(leap==0){
                return 28;
            }
            else{
                return 29;
            }
        }
}

int main(){
    int dd,mm,yy,td=0;

    scanf("%d/%d/%d",&dd,&mm,&yy);
    int leap=leapcount(yy);
    int i;
    if(mm<1){
        td=td+dd;
    }
    else{
        for(i=1;i<mm;i++){
            td =td+days(i,leap);
        }
        td=td+dd;
    }
    printf("%d",td);
}
