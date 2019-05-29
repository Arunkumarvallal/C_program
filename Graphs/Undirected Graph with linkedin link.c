#include<stdio.h>
#include<stdlib.h>
#define nov 4
#define noe 4
typedef struct edge{//edge creation
char ch1;
char ch2;
int we;
}EDGE;
EDGE data[noe]={{'A','B',3},{'C','B',4},{'A','C',2},{'B','D',5}};



typedef struct node{   //col Creation as node
char ch;
struct node *next;
int weight;
}NODE;
NODE *newNode,*tptr,* head[noe];

typedef struct headArr{     //row creation as headarr
char alpha;
struct node *link;
struct headArr * nex;
}HEADARR;
HEADARR *newHead,*tptrhead,*startArr=NULL,*prev=NULL;

HEADARR * createHeadarr(char chas){            //creating row as headArr
newHead=(HEADARR *)malloc(sizeof(HEADARR));
newHead->alpha=chas;
newHead->nex=newHead->link=NULL;
return newHead;
}


void connection(char ind_ch,char con_ch,int weigh){  //Connection of edges (headArr and node )eg:A - B edges
newNode=(NODE *)malloc(sizeof(NODE));
newNode->ch=con_ch;
newNode->weight=weigh;
newNode->next=NULL;

if(startArr==NULL){                             //headArr start if NULL create a newHead
    startArr=createHeadarr(ind_ch);
     if(startArr->link==NULL)            //if linking node is empty then make this as linking node starting address
                        startArr->link=newNode;
                    else{

                        for(tptr=startArr->link;tptr->next;tptr=tptr->next);            //if exist then add it in the last of link nodes
                                tptr->next=newNode;
                    }
}
else{                                                  //if not null then
    for(tptrhead=startArr;tptrhead&&tptrhead->alpha!=ind_ch;prev=tptrhead,tptrhead=tptrhead->nex);
            if(tptrhead==NULL)              //if head not exist eg if A is not exist then create
            {
            newHead=createHeadarr(ind_ch);
            prev->nex=newHead;
            }
            else{                           //if Head already exist then just link the nodes

                    if(tptrhead->link==NULL)            //if linking node is empty then make this as linking node starting address
                        tptrhead->link=newNode;
                    else{

                        for(tptr=tptrhead->link;tptr->next;tptr=tptr->next);            //if exist then add it in the last of link nodes
                                tptr->next=newNode;
                    }
            }
}
}

void display(){            //displaying the matrix only connected
for(tptrhead=startArr;tptrhead;tptrhead=tptrhead->nex){

    for(tptr=tptrhead->link;tptr;tptr=tptr->next){

        printf("%c\t->\t%c =\t%d /t",tptrhead->alpha,tptr->ch,tptr->weight);
    }

}
}

int main(){
int ind;

for(ind=0;ind<noe;ind++){                       //since unDirected  graph  both way travesal  so making two ways insertion
   connection(data[ind].ch1,data[ind].ch2,data[ind].we);
   connection(data[ind].ch2,data[ind].ch1,data[ind].we);
}
display(); //displaying the connected graph
return 0;
}



