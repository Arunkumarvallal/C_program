#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define nov 4
#define noe 4
#define UNVISTED 0
#define VISTED 1
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

typedef struct headss{
int cost,vist;
char vertex,parent;
}HEAD;
HEAD heads[nov],temp;



void initHeader(){
int index;
for(index=0;index<nov;index++){
    heads[index].cost=INT_MAX;
    heads[index].vist=UNVISTED;
    heads[index].vertex=index+65;
    heads[index].parent=' ';
}
}

void Display(){
int index;
for(index=0;index<nov;index++){
  printf( " %c\t %d \t%d \t %c \n",heads[index].vertex,heads[index].vist,heads[index].cost,heads[index].parent);
}
}


char find_Min(){
    int index,minimum=INT_MAX;
    char minimum_ch;

    for(index=0;index<nov;index++){
        if(heads[index].cost<minimum&&heads[index].vist!=VISTED)
                minimum_ch=heads[index].vertex;

    }
    return minimum_ch;
}


void Djis(char src_char){
char min_char;
int count=0;
heads[src_char-65].cost=0;
while(count<nov)
{
min_char=find_Min();
heads[min_char-65].vist=VISTED;
count++;
for(tptr=head[min_char-65];tptr;tptr=tptr->next){
    if((heads[min_char-65].cost+(tptr->weight))<heads[(tptr->ch)-65].cost &&heads[(tptr->ch)-65].vist!=VISTED)
         {
            heads[(tptr->ch)-65].cost=heads[min_char-65].cost+(tptr->weight);
            heads[(tptr->ch)-65].parent=min_char;
         }


}
}

}






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
        printf("%c(%d) \t",tptr->ch,tptr->weight);
    printf("\n");
}
initHeader();
Display();
Djis('A');
printf("\n");
Display();



return 0;
}


