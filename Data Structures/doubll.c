#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next,*prev;

}NODE;
NODE *newNode,*start,*end,*tptr;
void insertNode(int givenData){
newNode=(NODE *)malloc(sizeof(NODE));
newNode->data=givenData;
newNode->next=newNode->prev=NULL;
if(start==NULL){
 end=start=newNode;
}
else{
    for(tptr=start;tptr&&tptr->data<newNode->data;tptr=tptr->next);
    if(tptr==start){
        start->prev=newNode;
        newNode->next=start;
        start=newNode;
    }
    else if(tptr==NULL)
  {
      end->next=newNode;
        newNode->prev=end;
    end=newNode;
}
else{
    tptr->prev->next=newNode;
    tptr->prev=newNode;
    newNode->prev=tptr->prev;
    newNode->next=tptr;
}

}


}



void display(){
    for(tptr=start;tptr;tptr=tptr->next){
    printf("%d ",tptr->data);    }
}

void deleteNode(int givenData){
for(tptr=start;tptr->data!=givenData;tptr=tptr->next);
    if(tptr==start){
    start=start->next;
    start->prev=NULL;
    free(tptr);
    }
else if(tptr==end){
    end=end->prev;
    end->next=NULL;
    free(tptr);
}
    else{
                tptr->prev->next=tptr->next;

        tptr->next->prev=tptr->prev;
        free(tptr);
    }
}


int main(){
insertNode(10);
display();
printf("\n");
insertNode(20);
display();
printf("\n");
insertNode(40);
display();
printf("\n");
insertNode(30);
display();
printf("\n");
insertNode(5);
display();
printf("\n");
deleteNode(20);
printf("\n");
display();
deleteNode(40);
printf("\n");
display();deleteNode(30);
printf("\n");
display();
printf("\n");
deleteNode(5);
display();
}

