#include <stdio.h>

int main()
{
    int rows, cols, i, j,k=1;
    scanf("%d", &rows);
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(k==1){
                printf("1");
            }
            else{
                printf("0");
            }
           k=k*-1;
        }
        if(cols % 2 == 0)
        {
            k *= -1;
        }
        printf("\n");
    }

    return 0;
}
//5 5
//10101
//01010
//10101
//01010
//10101
