#include<stdio.h>
void test(int x);
int main()
{
    int n;
    scanf("%d",&n);
    test(n);
    return 0;
}
void test(int x)
{
    if (x%2==0)
        printf("Even");
    else
        printf("Odd");   
}
