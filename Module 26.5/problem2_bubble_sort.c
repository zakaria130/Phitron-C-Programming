#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
            {
               if(a[j]>a[j+1])
                   {
                       temp=a[j];
                       a[j]=a[j+1];
                       a[j+1]=temp;
                   }
            }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
