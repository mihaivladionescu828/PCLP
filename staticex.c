#include<stdio.h>
int *contor(void) {
  int x=0; ++x; return &x;
}
int main(){
int *p = contor(); printf( " %d, " , *p); *p = 100;
int *q = contor(); printf( " %d, %d " , *q, *p);
return 0;
}