#include<stdio.h>
int main()
{
    int x=4;
    unsigned char a=*(unsigned char*)&x;
    printf("%hhu",a);
    return 0;
}