#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct QUEUENODE{
	int data;
	struct QUEUENODE *pre;
}node;

typedef struct QUEUE{
	struct QUEUENODE *head;
}queue;

int size = 0;

//ť�� �����Ѵ�. 
queue* createqueue()
{
	queue* q = (queue*)malloc(sizeof(queue));
	q->head = NULL;
	return q;
}

//��带 ����ִ´�. 
void push(queue *q,int x)
{
	node* newnode = (node*)malloc(sizeof(node));
	node* temp = (node*)malloc(sizeof(node));
	temp = q->head;
	newnode->data = x;
	
	if(q->head == NULL)
	{
		q->head = newnode;
		newnode->pre = NULL;
	}
		
	else
	{
		while(temp->pre != NULL)
			temp = temp->pre;
		temp->pre = newnode;
		newnode->pre = NULL;
	}
	temp = NULL;
	free(temp);
	size++;
}

//������ ���� ��带 ������. 
void pop(queue *q)
{
	if(q->head == NULL)
		return;
	node* temp = (node*)malloc(sizeof(node));
	temp = q->head;
	q->head = temp->pre;
	free(temp);
	if(size > 0)
		size--;
}

//ť�� ��������� 1,�ƴϸ� 0�� ��ȯ�Ѵ�. 
int empty(queue* q)
{
	if(q->head == NULL)
		return 1;
	else
		return 0;
}

//��� ��带 ����Ѵ�. 
void printqueue(queue *q)
{
	node* temp = (node*)malloc(sizeof(node));
	temp = q->head;
	printf("queue:");
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->pre;
	}
	temp = NULL;
	free(temp);
	printf("\n");
}

//������ ���� ��带 ��ȯ�Ѵ�. 
int front(queue *q)
{
	if(q->head == NULL)
		return -1;
		
	return q->head->data;
}

//���� �ڿ� �ִ� ��带 ��ȯ�Ѵ�. 
int back(queue *q)
{
	node* temp = q->head;
	
	if(q->head == NULL)
		return -1;
		
	while(temp->pre != NULL)	
		temp = temp->pre;
	
	return temp->data; 
}

//��� ��带 ���� 
void freequeue(queue *q)
{
	node* temp = (node*)malloc(sizeof(node));
	temp = q->head;
	while(!empty(q))
		pop(q);
	temp = NULL;
	free(temp);
}

int main()
{
	int i,n,num,x;
	char s[6];
	queue *q = createqueue();
	
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%s",s);
		if(strcmp(s,"push") == 0)
			scanf("%d",&x);
		if(strcmp(s,"push") == 0)num = 1;
		if(strcmp(s,"pop") == 0)num = 2;
		if(strcmp(s,"size") == 0)num = 3;
		if(strcmp(s,"empty") == 0)num = 4;
		if(strcmp(s,"front") == 0)num = 5;
		if(strcmp(s,"back") == 0)num = 6;
		
		switch(num)
		{
			case 1:
					push(q,x);
					break;
			case 2:
					printf("%d\n",front(q));
					if(front(q) == -1)
						break;
					pop(q);
					break;
			case 3:
					printf("%d\n",size);
					break;
			case 4:
					printf("%d\n",empty(q));
					break;
			case 5:
					printf("%d\n",front(q));
					break;
			case 6:
					printf("%d\n",back(q));
					break;
		}
	}
	return 0;
}
