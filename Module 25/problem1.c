#include<stdio.h>
void myfunction();
int main()
{
myfunction();
    return 0;
}
void myfunction()
{
     int n,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]); 
    }
    int k;
    scanf("%d",&k);
    for (int i = 0; i < n; i++)
    {
       if(a[i]>k || a[i]<k)
       count++;
    }
    printf("%d",count);
}