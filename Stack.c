#include <stdio.h>
int n=100,a[100];
int top=-1;
void push(int x)
{
    if(top==n)
      printf("\n Stack is overflow");
    else
      top++;
      a[top]=x;
      printf("\t %d",a[top]);
}
void pop()
{
    if(top==-1)
      printf("\n Stack is underflow");
     else
       printf("\n element popped is%d",a[top]);
       top--;
}
void peek()
{
    printf("\n The top element is %d",a[top]);
}
int main()
{
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    push(0);
    pop();
    pop();
    peek();
}
