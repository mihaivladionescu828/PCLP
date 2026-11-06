#include<stdio.h>
void shift_pointers(int **addr_p1,int **addr_p2,int **addr_p3)
{
    int* p4;
    p4=*addr_p1;
    *addr_p1=*addr_p2;
    *addr_p2=*addr_p3;
    *addr_p3=p4;
}
int main()
{
    int x=5,y=10,z=20,*p1=&x,*p2=&y,*p3=&z;
    printf("%d\n %d\n  %d\n %d\n %d\n %d\n ",x,y,z,*p1,*p2,*p3);
   
    shift_pointers(&p1,&p2,&p3);
    printf("dupa%d\n %d\n  %d\n %d\n %d\n %d\n ",x,y,z,*p1,*p2,*p3);
    return 0;
}