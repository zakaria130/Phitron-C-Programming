#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,i;
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)
    {
        if (N%i==0)
        {
            printf("%d ",i);
        }
        
        
    }
    
    
    return 0;
}