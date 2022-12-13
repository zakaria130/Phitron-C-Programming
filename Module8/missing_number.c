#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    int array[n+1];
    for ( i = 1; i <=n; i++)
    {
        array[i]=0;
    }
    
    for(i=1;i<n;i++)
    {
        scanf("%d",&x);
        array[x]=1;

    }
    for ( i = 1; i <=n; i++)
    {
        //  printf("%d=>%d\n",i,array[i]);
        if (array[i]==0)
        {
           
            printf("%d",i);
            break;
        }
        
    }
    
    return 0;
}
