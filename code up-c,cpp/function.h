
int arrmax(int *x,int n)
{//�迭�� �ִ��� ��ȯ�ϴ� �Լ�. 
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(x + i) > *(x + j))
			{
				k = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = k;
			}
		}
	}
	return *(x+n-1);
}

int arrmin(int *x,int n)
{//�迭�� �ּڰ��� ��ȯ�ϴ� �Լ�. 
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(x + i) > *(x + j))
			{
				k = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = k;
			}
		}
	}
	return *x;
}

void swap(int *a, int *b)
{//�� ������ ���� ���� �ٲٴ� �Լ�. 
	int temp=0;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int maxnumber(int *x,int n)
{//�迭���� ���� ū ���� ���°���� ��ȯ�ϴ�  �Լ�. 
	int i, a=0;
	long long int b=-2000000000;
	
	for (i = 0; i < n; ++i)
	{
		if (b < *(x+i))
		{
			b=*(x+i);
			a = i;
		}
	}
	return a+1;
}

int minnumber(int *x,int n)
{//�迭���� ���� ���� ���� ���°���� ��ȯ�ϴ� �Լ�. 
	int i, a=0;
	long long int b=2000000000;
	
	for (i = 0; i < n; ++i)
	{
		if (b > *(x+i))
		{
			b=*(x+i);
			a = i;
		}
	}
	return a+1;
}

void arrdress(int *x,int n)
{//�迭�� ������ ���ְ� ����� �����ʴ´�. 
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(x + i) > *(x + j))
			{
				k = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = k;
			}
		}
	}
}

void arrdress2(int *x,int n)
{//�迭�� ������ ���ְ� ����� ���ش�. 
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(x + i) > *(x + j))
			{
				k = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = k;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ",*(x+i));
}
























