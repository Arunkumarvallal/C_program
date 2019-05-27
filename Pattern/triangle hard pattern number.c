#include<stdio.h>
#include <stdio.h>

int main()
{
    int rows, i, j,k;
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {

        if(i%2!=0){
            k=1;
        }
        else{
            k=2;
        }
        for(j=1;j<=i;j++,k=k+2){
            printf("%d",k);


      }
      printf("\n");
    }

    return 0;
}
