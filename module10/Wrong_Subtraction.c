#include<stdio.h>
int main()
{
    long long int n,k,i;
    scanf("%lld%lld",&n,&k);
    for ( i = 1; i <=k; i++)
    {
        if (n%10==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
        
        
    }
    printf("%lld",n);
    return 0;
}
