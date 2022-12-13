#include<stdio.h>
#include<math.h>
int myf(int y)
{
    int ans=0,x;
    for (int j = 1;  j<=4; j++)
        {
            x=y%10;
            if (j==1||j==4)
            {
                ans+=x;
            }
            y=y/10;
            
        }
    return ans;
}
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    int array[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
        ans+=myf(array[i]); 
    }
    printf("%d",ans);
    
    return 0;
}

