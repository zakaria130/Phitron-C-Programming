#include<stdio.h>
int main()
{
    int a=1,n,cycle=1;
    printf("give your number");
    scanf("%d",&n);
    while (n!=1)
    {
        printf("%d, %d\n",a,n);
        cycle++;
        a++;
        if (n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        
        
    }
    printf("%d, %d\n",a,n);
    printf("cycle=%d",cycle);
    
    
    return 0;
}
