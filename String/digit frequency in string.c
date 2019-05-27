#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

  int frequency[10]={0},i;
char ch[100];
scanf("%s",ch);
int len=strlen(ch)-1;
while (ch[i]) // Loop to end of string
{
  if (ch[i] >= '0' && ch[i] <= '9') // Check that the character is in range
  {
    ++frequency[ch[i] - '0']; // notice the -'0' to get in range 0..9
  }
  ++i;
}

for(i=0;i<10;i++){
printf("%d ",frequency[i]);
}

    return 0;
}
