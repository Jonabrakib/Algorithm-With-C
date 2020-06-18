#include<stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *l;
struct node *r;
};
typedef struct node Node;

Node *root=NULL;
Node *NEW=NULL;

void insert(int val)
{
    NEW=(Node*)malloc(sizeof(Node));
    NEW->data=val;
     NEW->l=NEW->r=NULL;


     if(root==NULL)
        root=NEW;
     else search(root);




}
void search(Node *t)
{
    if(NEW->data > t->data && t->r!=NULL){
        search(t->r);
    }
    else if(NEW->data > t->data && t->r==NULL){
    t->r=NEW;
    }
    if(NEW->data < t->data && t->l!=NULL){
        search(t->l);
    }
    else if(NEW->data < t->data && t->l==NULL){
    t->l=NEW;
    }
}
void printInPreOrder(Node *t)
{
    if(root == NULL){
        printf("The tree is empty");
        return;
    }

    if(t->l!=NULL){
        printInPreOrder(t->l);
        }

    if(t->r!=NULL){
    printInPreOrder(t->r);
    }
     printf("%d",t->data);
}
int main()
{
    int value, i;
    printf("\n Enter 8 BST Values\n");
    for(i=0;i<8;i++){
        scanf("%d",&value);
        insert(value);
    }
    printInPreOrder(root);
    return 0;
}



