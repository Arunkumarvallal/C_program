/*string 1:"BACDGABCDA"
 string 2:   "ABCD"
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 256

bool compare(char arr_txt[],char arr_pat[]){
int index=0;
for(index=0;index<MAX;index++)
 {

 if(arr_pat[index]!=arr_txt[index])
        return false;
 }
return true;

}

void SearchString(char *txt,char *pattern){
int index=0;
int len_pat=strlen(pattern);//finding the length of two string
int len_txt=strlen(txt);

char arr_pat[MAX]={0},arr_txt[MAX]={0}; // Declaring two char array of size 256



for(index=0;index<len_pat;index++){     //for first window size incrementing the value to 1 for both
    (arr_pat[pattern[index]])++;
    (arr_txt[txt[index]])++;
}

for(index=len_pat;index<len_txt;index++){

    if(compare(arr_pat,arr_txt))   //if they are matched then they are anagram.showing starting of the index
        printf("found at %d\n",index-len_pat);
    (arr_txt[txt[index]])++;//incrementing next element

    (arr_txt[txt[index-len_pat]])--;//decrementing previous first element

}

if(compare(arr_pat,arr_txt)) //this is for last window size comparison
        printf("found at %d\n",index-len_pat);

}

int main(){
char txt[]="BACDGABCDA";
char patternTxt[]="ABCD";
SearchString(txt,patternTxt);//passing the two string for checking anagram
}
