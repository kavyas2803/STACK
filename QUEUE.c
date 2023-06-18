#include <stdio.h>
int n = 100, f = -1, r = -1;
int q[100];

void enqueue(int x)
{
    if (r >= n)
        printf("\n Queue is overflow");
    else {
        f=0;
        r++;
        q[r] = x;
        printf("\n Queue is enqueued %d", q[r]);
    }
}

void dequeue()
{  
        printf("\n Element dequeued is %d", q[f]);
        f++;   
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    dequeue();
}
