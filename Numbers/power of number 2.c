
// C Program to find whether a
// no is power of two
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

/* Function to check if x is power of 2*/
bool isPowerOfTwo(int n)
{
   return (ceil(log2(n)) == floor(log2(n)));
}

// Driver program
int main()
{
    int num;
    scanf("%d",&num);
    isPowerOfTwo(num)? printf("%d is a number that is the power of 2",num): printf("%d is not the power of 2",num);
    return 0;
}

