#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,pos=1,neg=1;
    for (int i = 1; i <=n; i++)
    {
        if (pos>0 )
        {
            sum+=i;
            pos++;
            if (pos==4)
            {
                pos=0;
            }
        }
        else
        {
            sum-=i;
            neg++;
            if (neg==4)
            {
                neg=1;
                pos=1;
            }    
        }
        
        
    }
    printf("%d",sum);
    return 0;
}
