#include<stdio.h>
int main()
{
    long long int a,b,mul,rem,GCD,LCM;
    scanf("%lld%lld",&a,&b);
    mul=a*b;
    printf("The LCM of %lld and %lld is ",a,b);
   while (b!=0)
   {
    rem=a%b;
    
    a=b;
    b=rem;
   }
   GCD=a;
   LCM=mul/GCD;
   printf("%lld",LCM);
    
    return 0;
}
