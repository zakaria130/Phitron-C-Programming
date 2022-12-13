#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row=3,column=3;
    int a[row][column];
    int i,j,ans=1,ans2=0;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x=a[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    if (row=column)
    {
        for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if (i!=j)
            {
                if (a[i][j]!=0)
                {
                    ans=0;
                }

            }
            else if (i==j)
            {
                if (a[i][j]==0)
                {
                    ans=0;
                }

            }
            else
            {
                ans=1;
            }



        }
        if(ans==0)
        {
            break;
        }
    }
    }
    if(ans==0)
    {
        printf("It is not diagonal\n");
    }
    else{
        printf("It is diagonal\n");

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if (i==j&&a[i][j]==x)
            {
                ans2=1;
            }
            else if(i==j&&a[i][j]!=x)
            {
                ans2=0;
            }

        }
        if(ans2==0)
        {
            break;
        }
    }
    if(ans2==1){
        printf("It is also scaler\n");
    }
    else{
        printf("But it is not scaler\n");
    }

for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if (i==j&&a[i][j]==1)
            {
                ans2=1;
            }
            else if(i==j&&a[i][j]!=1)
            {
                ans2=0;
            }

        }
        if(ans2==0)
        {
            break;
        }
    }
    if(ans2==1){
        printf("It is also identical\n");
    }
    else{
        printf("But it is not identical\n");
    }
    return 0;
}
