#include<stdio.h>
int main()
{
    long long int n,i;
    scanf("%lld",&n);
    printf("The factors of %lld are:",n);
    for ( i = 1; i <n; i++)
    {
        if (n%i==0)
        {
            printf(" %lld,",i);
        }
        
    }
    printf(" %lld.",n);
    

    return 0;
}
