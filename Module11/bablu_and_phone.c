#include<stdio.h>
int main()
{
    int T,X,i,j,time=0;
    scanf("%d",&T);
    int ans[T+1];
    char sign;
    for ( i = 1; i <=T; i++)
    {
        ans[i]=0;
        time=0;
        scanf("%d%c",&X,&sign);
        for ( j = X+1; j <=100; j++)
        {
            if (j<=60)
            {
                time++;
            }
            else if (j<=80&&j>60)
            {
                time+=2;
            }
            else if (j>80&&j<=100)
            {
                time+=3;
            }
            
            
            ans[i]=time;
            
            
            
            
        }
        
    }
    for ( i = 1; i <=T; i++)
    {
        printf("%d minutes\n",ans[i]);
    }
    
    
    
    return 0;
}
