#include<stdio.h>
#define nov 4
#define noe 4
typedef struct edge{
char ch1;
char ch2;
int we;
}EDGE;
EDGE data[noe]={{'A','B',3},{'C','B',4},{'A','C',2},{'B','D',5}};

int mat[nov][nov];

int main(){
int ind,ind1;

for(ind=0;ind<noe;ind++){
    mat[data[ind].ch1-65][data[ind].ch2-65]=data[ind].we;
    mat[data[ind].ch2-65][data[ind].ch1-65]=data[ind].we;
}
//printf("%d",mat[0][0]);
for(ind=0;ind<nov;ind++){
    for(ind1=0;ind1<nov;ind1++){
    printf("%d\t",mat[ind][ind1]);
    }
printf("\n");
}


return 0;
}

