#include<stdio.h>
#include<math.h>
int my_fandl(int x)
{
    int ans=0;
    int tempans=0;
    for (int i = 1; i <= 4; i++)
    {
        
        tempans=x%10;
        x=x/10;
        if (i==1 || i==4)
        {
            ans+=tempans;
        }  
    }
    return ans; 
}
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    int array[4];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",array[i]);
        ans+=my_fandl(array[i]);
    }  
    printf("%d",ans);
    return 0;
}
