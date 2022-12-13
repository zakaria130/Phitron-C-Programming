#include<stdio.h>
#include<string.h>
int main()
{

int t;
scanf("%d",&t);
for (int i = 1; i <=t; i++)
{
    int n,ans=0;
    scanf("%d",&n);
    char array[n+1];
    for (int k = 0; k < n; k++)
    {
        scanf("%c",&array[k]);
    }
    
    array[n]='2';
    for (int l = 0; l <n+1; l++)
    {
        printf("%c",array[l]);
    }
    printf("\n");
    
    for (int j = 0; j < n; j++)
    {

        if (array[j]=='0' && array[j+1]=='1')
        {
            ans++;
            printf("%d\n",j);
        }

        
    }
    printf("%d",ans);
    
}

    return 0;
}
