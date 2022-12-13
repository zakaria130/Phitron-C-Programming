#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,xi=0,xj=0,array[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (array[i][j]!=0)
            {
                if (i>2)
                {
                    xi=i-2;
                }
                else if (i<2)
                {
                    xi=2-i;   
                }
                 if (j>2)
                {
                    xj=j-2;
                }
                else if (j<2)
                {
                    xj=2-j;   
                }
                
            }
            
        }
    }
    printf("%d",xi+xj);
   
    
    return 0;
}
