#include<stdio.h>
int echo(int n, int k) {
if (n <= 0) {
return k;
}
if (n % 2 == 0) {
return echo(n - 1, k + 1) + echo(n - 2, k);
} else {
return echo(n - 1, k) - echo(n - 3, k + 1);
}
}
int main()
{
    int n,k;
    printf("%d",echo(5,0));
    return 0;
}