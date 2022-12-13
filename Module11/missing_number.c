#include<stdio.h>
int main()
{
   int S,array[3],x;
    int T,i,j;
    
    scanf("%d",&T);
    for ( i = 1; i <=T ; i++)
    {
        x=0;
        scanf("%d",&S);
        for ( j = 0; j < 3; j++)
        {
            array[j]=0;
            scanf("%d",&array[j]);
            x+=array[j];


        }
        printf("%d\n",S-x);
        
    }
    
    return 0;
}
