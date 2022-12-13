#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n>0)
    {
       for (int i = n; i >=(-1)*n; i--)
       {
        printf("%d ",i);
       }
       
    }
    if (n<0)
    {
       for (int i = n; i <=-n; i++)
       {
        printf("%d ",i);
       }
       
    }
    
    return 0;
}