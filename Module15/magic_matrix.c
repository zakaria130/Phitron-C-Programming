
#include <stdio.h>
int main() {
int matrix[3][3];
int i,j;
int sumd1=0,sumd2=0,sumr=0,sumc=0,ans=0;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&matrix[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j)
        {
            sumd1+=matrix[i][j];
        }
        if(i+j==2)
        {
            sumd2+=matrix[i][j];
        }
    }
}
if(sumd1==sumd2)
    {
        for(i=0;i<3;i++)
            {
                sumc=0;
                sumr=0;
                 for(j=0;j<3;j++)
                {
                    sumc+=matrix[i][j];
                    sumr+=matrix[j][i];
                 }
                 if(sumc==sumr && sumc==sumd1)
                 {
                     ans=1;
                 }


            }
    }
    if(ans==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
