#include<stdio.h>
int main()
{
    double a,b;
    double *p,*q;
    p =&a;
    q=&b;
    scanf("%lf %lf",p,q);
    printf("%.2lf",(*p+*q)/2);
    return 0;
}
