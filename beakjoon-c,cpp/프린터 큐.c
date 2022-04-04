#include<stdio.h>
#include<stdlib.h>

int compare(const void *x,const void *y)
{
    int a = *(int*)x;
    int b = *(int*)y;
    
    if(a > b)
		return -1;
    else if(a < b)
		return 1;
    else
		return 0;

}

typedef struct NODE{
    int num[101];
}queue;
int front=-1,rear;

int main()
{
    int i,j,t,k,n,m,count = 0;
    int arr[101],p = 0;
    queue q;
    
    scanf("%d",&t);
    for(i = 0;i < t;i++)
    {
        scanf("%d %d",&n,&m);
        for(j = 0;j < n;j++)
        {
            scanf("%d",&k);
            arr[j] = k;
            q.num[j] = k;
        }
        qsort(arr,n,sizeof(int),compare);
        
        rear = n-1;
        front = -1;
        for(j = 0;j <= n;j++)
        {
            if(j == n)
                j = 0;
            front++;
            if(front == rear+1)
            {
                front = -1;
                continue;         
            }
            if(arr[p] == q.num[front])
            {
                count++;
                if(front == m)                  
                    break;
                arr[p] = -1;
                p++;
            }
        }
        printf("%d\n",count);
        count = 0;
        p = 0;
    }
    return 0;

}
