#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
	int data;
	struct NODE *link;
}node;

typedef struct Queuelist{
	node* head;
	node* tail;
}queuelist;

node* createnode(int x)
{
	node* newdata = (node*)malloc(sizeof(node*));
	newdata->data = x;
	newdata->link = NULL; 
	return newdata;
}

void enqueue(queuelist *q,node* a)
{
	if(q->head == NULL)
	{
		q->head = a;
		a->link = q->head;
		q->tail = a;
	}
	else
	{
		q->tail->link = a;
		a->link = q->head;
		q->tail = a;
	}
}

void dequeue(queuelist *q,node* a)
{
	if(q->head == NULL)
		return;
		
	node* temp = a->link;
	a->link = a->link->link;
	free(temp);
}

int main()
{
	int i,n,k;
	queuelist *A = (queuelist*)malloc(sizeof(queuelist*));
	node* temp;
	node* temp2;
	A->head = NULL;
	
	scanf("%d %d",&n,&k);
	for(i = 1; i <= n; i++)
		enqueue(A,createnode(i));
	temp = A->head;
	
	printf("<");
	if(k == 1)
	{
		for(i = 1; i <= n; i++)
		{
			if(i == n)
			{
				printf("%d>",temp->data);
				free(temp);
				return 0;
			}
			printf("%d, ",temp->data);
			temp2 = temp;
			temp = temp->link;
			free(temp2);
		}
	}
	
	for(i = 1; i <= n*k; i++)
	{
		if(i % k == 0)
		{
			if(i == n*k)
			{
				printf("%d>",temp->data);
				dequeue(A,temp2);
				return 0;
			}
			printf("%d, ",temp->data);
			temp = temp2;
			dequeue(A,temp2);
		}
		temp2 = temp;
		temp = temp->link;
	}

	return 0;
}
