#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);
    switch (x)
    {
    case 'A':
    printf("best!!!");
    break;
    
    case 'B':
    printf("good!!");
    break;
    
    case 'C':
    printf("run!");
    break;
    
    case 'D':
    printf("slowly~");
    break;
    
    default:
    printf("what?");
    }

     return 0;
}
