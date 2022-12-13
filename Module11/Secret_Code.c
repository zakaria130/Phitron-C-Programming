#include<stdio.h>
int main()
{
    int T,N,i,j;
    scanf("%d",&T);
    int output[T+1];
    for ( i = 1; i <=T; i++)
    {
        output[i]=1;
        scanf("%d",&N);
        if (N==0||N==1)
        {
            output[i]=0;
        }
        
        for ( j = 2; j <=N/2; j++)
        {
            if (N%j==0)
            {
                output[i]=0;
                break;
            }
            
        }
        

    }
    for ( i = 1; i <=T; i++)
    {
        if (output[i]==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
        
    }
    
    
    return 0;
}
