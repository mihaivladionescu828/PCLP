#include<stdio.h>
int main()
{
    int a,b,c,*p1=&a,*p2=&b,*p3=&c;
    *p1=10;
    *p2=*p1;
    *p3=*p2*2;
    printf("%d,%d,%d\n",a,b,c);
    return 0;
}