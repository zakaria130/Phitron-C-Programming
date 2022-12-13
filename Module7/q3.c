#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long int n,digits;
   digits=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        n=n/10;
        digits++;
    }
    printf("%lld digits",digits);

    return 0;
}
