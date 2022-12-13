#include<stdio.h>
int s(int n)
{
    
    if (n>0)
    {
        return s(n-1)+n;
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int sod=s(n);
    printf("%d",sod);
    return 0;
}
