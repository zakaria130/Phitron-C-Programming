#include<stdio.h>
int main()
{
    long long int n,i;
    int flag=0;
    scanf("%lld",&n);
    if (n==0||n==1)
    {
        flag=1;
    }
    
    for ( i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("Composite");
    }
    else
    {
        printf("Prime");
    }
    
    
    
    return 0;
}
