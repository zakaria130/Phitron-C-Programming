#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=2222;
    int ans=0;
    for (int i = 1; i <= 4; i++)
    {
        int tempans;
        tempans=x%10;
        x=x/10;
        if (i==1 || i==4)
        {
            ans+=tempans;
        }
        
        
    }
    printf("%d",ans);
    return 0;
}
