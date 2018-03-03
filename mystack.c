#include<stdio.h>
#include<stdlib.h>
#include "mystack.h"

struct node
{
    int data;
    struct node *link;
}*top = NULL;

// to insert elements in stack
void push()
{
    int val,count;
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
    count = st_count();
    if (count <= MAX - 1)
    {
        printf("\nEnter value which you want to push into the stack :\n");
        scanf("%d",&val);
        temp->data = val;
        temp->link = top;
        top = temp;
    }
    else
        printf("WARNING: STACK FULL\n");
}
 
// to delete elements from stack
void pop()
{
    struct node *temp;
    if (top == NULL)
        printf("**Stack is empty**\n");
    else
    {
        temp = top;
        printf("Value popped out is %d \n",temp->data);
        top = top->link;
        free(temp);
    }
}
// to print top element of stack
void peek()
{
    if (top == NULL)
        printf("\n**Top is not available for an EMPTY stack**\n");
    else
        printf("\nTop of the stack is %d \n",top->data);
}
int st_count()
{
    int count = 0;
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        temp = temp->link;
        count++;
    }
    return count;
}