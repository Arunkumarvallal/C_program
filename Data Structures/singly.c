#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}NODE;

NODE *newNode,*tptr,*start=NULL,*prev;

void addNode(int input){
newNode=(int *)malloc(sizeof(int));
newNode->data=input;
newNode->next=NULL;
if(start==NULL){
    start=newNode;
}
else{
   for(prev=NULL,tptr=start;tptr&&tptr->data<newNode->data;prev=tptr,tptr=tptr->next);
   if(tptr==start){
    newNode->next=tptr;
    start=newNode;
   }
   else{
    prev->next=newNode;
    newNode->next=tptr;
   }
}

}
int display(){
for(tptr=start;tptr;tptr=tptr->next)
    printf("%d ",tptr->data);
}
void deletes(int input){

for(prev=NULL,tptr=start;tptr->data!=input;prev=tptr,tptr=tptr->next);
if(start==tptr){
    start=start->next;
    free(tptr);
}
else{
prev->next=tptr->next;
free(tptr);
}
}


int main(){
    addNode(10);
    display();
    printf("\n");
    addNode(70);
    printf("\n");
    display();
    printf("\n");
    addNode(29);
   printf("\n");
    display();
    printf("\n");
    addNode(45);printf("\n");display();printf("\n");
    addNode(234);printf("\n");display();printf("\n");
    addNode(98);printf("\n");
    display();printf("\n");
    addNode(656);printf("\n");
    display();
    printf("\n");
    deletes(29);
    printf("\n");
    display();
    deletes(45);
    printf("\n");
    display();
    deletes(98);
    printf("\n");
    display();

    printf("\n");
    }
