
#include <stdio.h>

int main()
{
    int i, j, rows,r;

    /* Input number of rows from user */

    scanf("%d %d", &rows,&r);


    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=r-i; j++)
        {
            printf(" ");
        }


        /* Print stars and center spaces */
        for(j=1; j<=r; j++)
        {
            if(i==1 || i==rows || j==1 || j==r)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
