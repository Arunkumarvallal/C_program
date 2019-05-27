#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

int length;
char s1[100],s2[100];
fgets(s1,100,stdin);
fgets(s2,100,stdin);
int len=strlen(s1)-1;
int len2=strlen(s2)-1;
if(len2<len){
    length=len;
}
else{
    length=len2;
}
int i,j;

for(i=0;i<len2;i++){
        for(j=0; j<len; j++)
        if(s2[i]==s1[j]){
            printf("%c",s2[i]);
            i++;
            if(j==len-1)
                break;
        }

}
}
