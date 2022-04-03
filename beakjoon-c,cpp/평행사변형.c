#include<stdio.h>
#include<math.h>

typedef struct POINT{
	double x,y;
}point;

double triangle(point p1,point p2,point p3)
{
	return ((p1.x*p2.y)+(p3.x*p1.y)+(p2.x*p3.y)-(p3.x*p2.y)-(p2.x*p1.y)-(p1.x*p3.y))/2;
}

double line(point p1,point p2)
{
	return (p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y); 
}
int main()
{
	int i,j;
	double Area,lenght[3],result,temp;
	point p[3];
	
	for(i = 0; i < 3;i++)
		scanf("%lf %lf",&p[i].x,&p[i].y);
	

	Area = triangle(p[0],p[1],p[2]);
	if(Area  == 0)
	{
		result = -1;
		printf("%lf",result);
		return 0;
	}
	else
	{
		lenght[0] = sqrt(line(p[0],p[1]));
		lenght[1] = sqrt(line(p[0],p[2]));
		lenght[2] = sqrt(line(p[1],p[2]));
		
		for(i = 0; i < 3;i++){
			for(j = 0; j < 2;j++){
				if(lenght[j] < lenght[j+1])
				{
					temp = lenght[j];
					lenght[j] = lenght[j+1];
					lenght[j+1] = temp;
				}
			}
		}
	}
	
	result = (lenght[2]*2+lenght[1]*2) - (lenght[1]*2+lenght[0]*2);
	if(result < 0)
		result *= -1;	
	printf("%.15lf",result);
	
	return 0;
}
