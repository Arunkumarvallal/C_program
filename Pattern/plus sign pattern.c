#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int centerRow, centerCol;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    centerRow = (rows+1) / 2;
    centerCol = (cols+1) / 2;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print 0 for central rows or columns
            if(centerCol == j || centerRow == i)
            {
                printf("0");
            }
            else if((cols%2 == 0 && centerCol+1 == j) || (rows%2 == 0 && centerRow+1 == i))
            {
                // Print an extra 0 for even rows or columns
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int centerRow, centerCol;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    centerRow = (rows+1) / 2;
    centerCol = (cols+1) / 2;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print 0 for central rows or columns
            if(centerCol == j || centerRow == i)
            {
                printf("0");
            }
            else if((cols%2 == 0 && centerCol+1 == j) || (rows%2 == 0 && centerRow+1 == i))
            {
                // Print an extra 0 for even rows or columns
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}}
