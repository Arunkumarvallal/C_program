#include<stdio.h>
#include<stdlib.h>
typedef struct  node{
int data;
struct node * left,*right;
}NODE;
NODE * newNode,*tptr,*parent=NULL,*root=NULL;
void addNode(int input){
    newNode=(NODE*)malloc(sizeof(NODE));
    newNode->data = input;
    newNode->left=newNode->right=NULL;
    if(root==NULL)
        root=newNode;
    else{
        for(tptr=root;tptr;parent=tptr,tptr=newNode->data<tptr->data?tptr->left:tptr->right);
            if(newNode->data<parent->data)
                parent->left=newNode;
            else
                parent->right=newNode;
        }
}
void display(NODE *ptr){
    if(ptr)
    {


        display((ptr)->left);
        printf("%d  ",(ptr)->data);
        display((ptr)->right);
    }
    //return ;
}



int main(){
    addNode(20);
    display(root);
 printf("\n");
    addNode(30);
    display(root);
  printf("\n");
    addNode(10);
    display(root);
  printf("\n");
    addNode(40);
    display(root);
  printf("\n");
    addNode(50);
    display(root);

}
