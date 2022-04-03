#include<stdio.h>

typedef struct POINT{
	double x,y;
}point;


/*
	�ﰢ���� ���̰�
	����� �ݽð�
	0�̸� ����
	������ �ð�����̴�
*/
double triangle(point p1,point p2,point p3)
{
	return (p1.x*p2.y)+(p3.x*p1.y)+(p2.x*p3.y)-(p3.x*p2.y)-(p2.x*p1.y)-(p1.x*p3.y);
}

int main()
{
	point abc[3];
	int i,result;
	double s;
	
	for(i = 0; i < 3; i++)
		scanf("%lf %lf",&abc[i].x,&abc[i].y);
	
	s = triangle(abc[0],abc[1],abc[2]);
	
	if(s > 0)
		printf("1");
	else if(s < 0)
		printf("-1");
	else
		printf("0");
	
	return 0;
}
