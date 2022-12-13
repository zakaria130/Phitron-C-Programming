#include<stdio.h>
int my_recurssion(int x,int sum)
{
    sum+=x;
    if(x>1)
    return my_recurssion(x-1,sum);
    else
    {
        printf("%d",sum);
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    my_recurssion(n,sum);
    return 0;
}
