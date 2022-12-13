#include<stdio.h>
int factorial(int n)
{
    int i;
    int ans=1;
    for ( i = 1; i <=n; i++)
    {
        ans=ans*i;
    }
    return ans;
    
}
int ratio(int n1,int n2)
{
    return (factorial(n1)/factorial(n2));
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);;
    printf("%d",ratio(n1,n2));
    return 0;
}
