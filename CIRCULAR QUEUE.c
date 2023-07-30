#include <stdio.h>
int n = 100, f = -1, r = -1;
int q[100];

void enqueue()
{
    if ((r+1)%n == f)
        printf("\n Queue is overflow");
    else {
        if (r == -1) 
            f = r = 0;
        else
            r = (r + 1) % n;
        
        printf("\n Enter the value");
        scanf("%d", &q[r]);
        printf("\n Queue is enqueued %d", q[r]);
    }
}

void dequeue()
{
    if (f == -1)
        printf("\n Underflow");
    else {
        if (f == r) {
            printf("\n %d is dequeued", q[f]);
            f = r = -1;
        } else {
            printf("\n %d is dequeued", q[f]);
            f = (f + 1) % n;
        }
    }
}

int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    dequeue();
}
