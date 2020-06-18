#include<stdio.h>

int top, maxStk;
top = -1;

void stacks_push(char item,char stk[])
{
    if(top==maxStk-1){
        printf("Over flow");
    }
    else{
            top++;
            stk[top]=item;
    }
}
void stacks_pop(char stke[])
{
    if(top==-1)
    {
        printf("Under flow");
    }
    else{
        top=top-1;
    }
}

void display(char stk[])
{   int i;
    if(top== -1){
        printf("Empty");
    }
    else{
        for(i=3;i>=0;i--)
            printf("\n %c \n",stk[i]);
    }
    printf("\n");
}

int main()
{
    char stak[5]={'a','b','c','d'};
    top = 3;
    maxStk = 5;
    char Item='e';
    stacks_push(Item,stak);
    display(stak);
    stacks_pop(stak);
    stacks_pop(stak);
    display(stak);
    return 0;
}
