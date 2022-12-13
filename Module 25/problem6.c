#include<stdio.h>
int main()
{
    int a,b,c;
    int *p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    scanf("%d %d %d",p,q,r);
    int sum = *p+ *q + *r;
    printf("%d",sum);
    return 0;
}
