#include<stdio.h>
int sum(int a[], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%10==0)
        sum+=a[i];     
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",sum(a,n));
    return 0;
}
