#include<stdio.h>
int main()
{
    int n,k,i,ans=0;
    scanf("%d%d",&n,&k);
int run[n];
for ( i = 0; i < n; i++)
{
    run[i]=0;
    scanf("%d",&run[i]);
    if (run[i]<k)
    {
        ans++;
    }
    
}
printf("%d",ans);

    return 0;
}
