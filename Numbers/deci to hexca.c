#include <stdio.h>
#include<string.h>
int main()
{
    long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];


    scanf("%ld", &decimalnum);

    quotient = decimalnum;

    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55+ remainder;
        quotient = quotient / 16;
    }

    // display integer into character
    for (i = j-1; i >= 0; i--)
            printf("%c", tolower(hexadecimalnum[i]));
    return 0;
}
