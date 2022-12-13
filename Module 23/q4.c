#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for (int i = 2; i <= n; i+=2)
    {
        printf("%d ",i);
    }
    for (int i = 1; i <=n ; i+=2)
    {
        printf("%d ",i);
    }
    if (k<=n/2)
    {
        printf("\nThe %dth element in this sequence is %d.",k,2*k);
    }
    else
    {
        printf("\nThe %dth element in this sequence is %d.",k,(2*(k-(n/2)))-1);
    }
    return 0;
}
