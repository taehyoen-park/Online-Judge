#include<stdio.h>
#include<string.h>
#include<math.h>

void change(int num[], char str[]); //���ڿ��� �� ���ڸ��� ���ڷ� �ٲ� �ٸ� �迭�� ������ ���´�.
int intnum(char c);//0~9 ���ڸ� ���ڷ� �ٲ۴�.
int add(int n, int num[]); // �ּڰ��� ���Ѵ�.

int main()
{
	char str[50];
	int num[50],val;

	scanf("%s", str);
	change(num, str);
	
	val = add(strlen(str),num);

	printf("%d", val);

	return 0;
}

int intnum(char c) 
{
	int num = c;
	return (num - 48);
} 

void change(int num[], char str[])
{
	int j = 0;
	for (int i = strlen(str) - 1; i >= 0; i--, j++)
	{
		if (str[i] == '+' || str[i] == '-')
			num[j] = str[i];

		else
			num[j] = intnum(str[i]);
	}
} 

int add(int n, int num[])
{
	int hap = 0,cha = 0, result = 0;
	double a = 0;

	for (int i = 0; i <= n; i++)
	{
		if (i == n)
			result += hap;
		if (num[i] == 43)
		{
			cha += hap;
			hap = 0, a = 0;
		}
		else if (num[i] == 45)
		{
			result -= (hap+cha);
			hap = 0,cha = 0, a = 0;
		}
		else
		{
			hap += num[i] * (int)pow(10.0, a);
			a++;
		}
	}

	if(cha > 0)
		result += cha;
	return result;
}