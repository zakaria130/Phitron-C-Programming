#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,a,b,c,total=0;
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if (a+b+c>1)
        {
            total++;
        }
        
    }
    printf("%d",total);
    

    return 0;
}
