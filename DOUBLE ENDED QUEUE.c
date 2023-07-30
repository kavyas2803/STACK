#include <stdio.h>
#define MAX_SIZE 100

int n = MAX_SIZE, f = -1, r = -1;
int q[MAX_SIZE];

void create()
{
    int i, no;
    printf("\n Enter the num of elements: ");
    scanf("%d", &no);
    f = 0;
    r = no - 1;

    for (i = 0; i < no; i++)
    {
        printf("\n Enter the value: ");
        scanf("%d", &q[i]);
    }
}

void insertatf()
{
    if (r == MAX_SIZE - 1) {
        printf("\n Cannot insert, Queue is full.");
        return;
    }

    int value;
    printf("\n ENTER ELEMENT TO BE INSERTED: ");
    scanf("%d", &value);

    if (f == -1)
        f = 0;

    r++;
    q[r] = value;
    printf("%d is inserted", q[r]);
}

void insertatr()
{
    if (r == MAX_SIZE - 1) {
        printf("\n Cannot insert, Queue is full.");
        return;
    }

    int value;
    printf("\n ENTER ELEMENT TO BE INSERTED: ");
    scanf("%d", &value);

    if (f == -1)
        f = 0;

    r++;
    q[r] = value;
    printf("%d is inserted", q[r]);
}

void deleteatf()
{
    if (f == -1)
    {
        printf("\n cannot delete, Queue is empty.");
        return;
    }

    printf("\n The front element %d is deleted", q[f]);

    if (f == r)
        f = r = -1;
    else
        f++;
}

void deleteatl()
{
    if (r == -1)
    {
        printf("\n Cannot delete, Queue is empty.");
        return;
    }

    printf("\n Last element %d is deleted", q[r]);

    if (f == r)
        f = r = -1;
    else
        r--;
}

int main()
{
    create();
    insertatf();
    insertatr();
    deleteatf();
    deleteatl();

    return 0;
}
