#include<stdio.h>
#include<math.h>
int my_factorial(int x)
{
    int ans=1;
    for (int i = 1; i <=x; i++)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    int x;
    scanf("%d",&x);
    int ans=my_factorial(x);
    printf("%d",ans);
    return 0;
}
