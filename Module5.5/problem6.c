#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,M,i;
    scanf("%d%d",&N,&M);
    if(N>M)
    {
        for(i=N;i>=M;i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=N;i<=M;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
