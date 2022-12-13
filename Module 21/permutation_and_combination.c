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
int permutation(int n ,int r)
{
    return my_factorial(n)/my_factorial(n-r);
}
int combination(int n ,int r)
{
    return my_factorial(n)/(my_factorial(n-r)*my_factorial(r));
}
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    printf("%d\n",permutation(n,r));
    printf("%d",combination(n,r));
    return 0;
}
