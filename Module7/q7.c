#include<stdio.h>
int main()
{
    long long int a,b,rem;
    scanf("%lld%lld",&a,&b);
    printf("The GCD of %lld and %lld is ",a,b);
   while (b!=0)
   {
    rem=a%b;
    
    a=b;
    b=rem;
   }
   printf("%lld",a);
   
    
    return 0;
}
