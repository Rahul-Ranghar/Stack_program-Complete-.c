// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define maxsize 10
int stack[maxsize],top=-1;
void push();
void pop();
void peek();
void display();
int main() {
    int ch;
    do{
    printf("Enter your choice:\n1-Push\n2-Pop\n3-Peek\n4-Display\n5-Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("Wrong input:\n");
            break;
        }
    }
    }while(ch!=5);
    return 0;
}
void push()
{
    if(top>=maxsize)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        int num;
        printf("Enter the element for insert:\n");
        scanf("%d",&num);
        top++;
        stack[top]=num;
    }
}
void pop()
{
    int n;
    if(top==-1)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        n=stack[top];
        top--;
        printf("%d is poped\n",n);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("%d is peek vlaue\n",stack[top]);
    }
}
void display()
{
    printf("Your stack is:\n");
    while(top!=-1)
    {
        printf("%d ",stack[top]);
        top--;
    }
}