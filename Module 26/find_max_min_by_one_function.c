#include<stdio.h>
void find_max_min(int n,int a[],int*p,int*q)
{
    *p=a[0];
    *q=a[0];
    for (int i = 0; i < n; i++)
    {
        if (*p<a[i])
        *p=a[i];
        if (*q>a[i])
        *q=a[i];  
    }
}
int main(int argc, char const *argv[])
{
    int a[]={1,3,4,6,77,33,55,11,24,45,67,99};
    int n=sizeof(a)/sizeof(a[0]);
    int maxx,minn;
    find_max_min(n,a,&maxx,&minn);
    printf("%d %d",maxx,minn);
    return 0;
}
