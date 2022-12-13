#include<stdio.h>
int main()
{
    long long int n,i,x,ans;
    scanf("%lld",&n);
    long long int array[n+1];
    x=0;
    ans=0;
    array[0]=0;
    for ( i = 1; i <= n; i++)
    {
        array[i]=0;
        scanf("%lld",&array[i]);
        if (array[i-1]>array[i])
        {
            x=array[i-1]-array[i];
            ans+=x;
            array[i]=array[i-1];
        }
        
    }

    printf("%lld",ans);
    

    return 0;
}
