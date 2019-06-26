    #include<stdio.h>
    #include<math.h>
    #include<stdlib.h>
    #define number 50
    int main(){
    long long int till,num,multiplier;
    long long int *primes=NULL;
    primes=(long long int *)calloc(number,sizeof(long long int));
    primes[0]=primes[1]=-1;
    till=sqrt(number);
    for(num=2;num<=till;num++){
        if(primes[num]==0){
            for(multiplier=2;multiplier*num<number;multiplier++){
                primes[multiplier*num]=1;
            }
        }
    }
    int index,ptr=0;
    for(index=0;index<number;index++){
        if(primes[index]==0){
           printf("%d\t",index);
        //    ptr++;
        }
    }
    printf("%d\t",ptr);

    }
