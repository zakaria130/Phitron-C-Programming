#include<stdio.h>
double pie=3.14159;
double area_of_circle(int r)
{
    return pie*r*r;
}
int main()
{
    int r;
    scanf("%d",&r);
    printf("%lf",area_of_circle(r));
    return 0;
}
