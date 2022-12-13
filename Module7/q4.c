#include<stdio.h>
int main()
{
    long long int n, sum;
    scanf("%lld",&n);
    sum=0;
    while (n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("%lld",sum);
    
    return 0;
}