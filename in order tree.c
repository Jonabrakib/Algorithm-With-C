#include<stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *l;
struct node *r;
};
typedef struct node Node;

Node *root=NULL;

void creatTree(char v1, char v2, char v3)
{
    Node *n1=(Node*)malloc(sizeof(Node));
    Node *n2=(Node*)malloc(sizeof(Node));
    Node *n3=(Node*)malloc(sizeof(Node));

    root=n1;
    n1->l=n2;
    n1->r=n3;


    root->data=v1;
    n2->data=v2;
    n3->data=v3;
    n2->l= n2->r=NULL;
    n3->l= n3->r=NULL;


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
    printf("%d",t->data);
    if(t->r!=NULL){
    printInPreOrder(t->r);
    }
}
int main()
{
    creatTree(2 , 3 , 5);
    printInPreOrder(root);
    return 0;
}

