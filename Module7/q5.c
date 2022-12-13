#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    while (n!=1)
    {
        if (n%2==0)
        {
            printf("%lld, ",n);
            n=n/2;
        }
        
        else
        {
            printf("%lld, ",n);
            n-=1;
        }
        
        
    }
    printf("1");
    
    
    return 0;
}
