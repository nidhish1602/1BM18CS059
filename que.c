#include <stdio.h>
#include <stdlib.h>

const int maxsize=10;

void enque(int a, int r, int que[maxsize])
{
    printf("Enter the element");
    scanf("%d", &a);
    if(r==maxsize)
        printf("Que is full");
    else{
        r++;
        que[r]==a;
    }

}

void deque(int r, int f, int que[maxsize])
{
    if(r==f)
        printf("Queue is empty");
    else{
    int b;
    b=que[f];
    int x=f+1;
    while(x<=r)
        {
            que[x-1]=que[x];
            x++;
        }
    }
}

/*void accept(int i, int n, int que[maxsize], int r)
{
    do{
        scanf("%d", &que[i]);
    }while(i<n);
    r=i;
}*/

void display(int f, int r, int que[maxsize])
{
    //for(int i=f, i<=r, i++)
    int i=f;
    while(i<=r)
        {
            printf("%d", que[i]);
            i++;
        }
}

int main()
{
    int f=0, r, que[maxsize], n, a, i=0, c=1, p=0;
    while(c=4)
    {
    printf("\nMenu");
    printf("\n 1.add\n 2.remove\n 3.Display\n");
    scanf("%d", &c);
    if(c=1)
    {
        enque(a, r, que);
    }
    else if(c=2)
    {
        deque(r, f, que);
    }
    else if(c=3)
    {
        display(f, r, que);
    }
    }
}
