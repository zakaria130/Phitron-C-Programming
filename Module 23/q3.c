#include <stdio.h>
#include<string.h>
char* my_function(long long int n);
int main() {
   long long int n;
   scanf("%lld",&n);
   printf("%s",my_function(n));
    return 0;
}
char* my_function(long long int n)
{
    long long int i=0;
    int a1=0,a7=0,a9=0;
    i=n;
    while(i>0)
    {
        
        if(i%10==1)
        {
            a1=1;
            break;
        }
        else
        {}
        i=i/10;
        
    }
    i=n;
     while(i>0)
    {
        if(i%10==7)
        {
           a7=1;
           break;
        }
        else
        {}
        i=i/10;
    }
    i=n;
     while(i>0)
    {
        if(i%10==9)
        {
           a9=1;
           break;
        }
        else
        {}
        i=i/10;
    }
    if(a1==1 && a7==1 && a9==1)
    return "Yes";
    else
    return "No";
}