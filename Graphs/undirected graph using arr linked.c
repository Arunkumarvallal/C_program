#include<stdio.h>
#include<stdlib.h>
#define nov 4
#define noe 4
typedef struct edge{
char ch1;
char ch2;
int we;
}EDGE;
EDGE data[noe]={{'A','B',3},{'C','B',4},{'A','C',2},{'B','D',5}};
typedef struct node{
char ch;
struct node *next;
int weight;
}NODE;
NODE *newNode,*tptr,* head[noe];
void connection(char ind_ch,char con_ch,int weigh){
newNode=(NODE *)malloc(sizeof(NODE));
newNode->ch=con_ch;
newNode->weight=weigh;
newNode->next=NULL;

if(head[ind_ch-65]==NULL)
        head[ind_ch-65]=newNode;
else{
    for(tptr=head[ind_ch-65];tptr->next;tptr=tptr->next);

        tptr->next=newNode;
}


}
int main(){
int ind,ind1,row,col;

for(ind=0;ind<noe;ind++){
   connection(data[ind].ch1,data[ind].ch2,data[ind].we);
   connection(data[ind].ch2,data[ind].ch1,data[ind].we);
}


for(row=0;row<nov;row++){
    for(tptr=head[row];tptr;tptr=tptr->next)
        printf("%d \t",tptr->weight);
    printf("\n");
}



return 0;
}


