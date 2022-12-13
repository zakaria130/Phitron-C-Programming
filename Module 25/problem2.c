#include<stdio.h>
void  as_sort(int [], int);
void gk(int a[],int k);
void sk(int a[],int k);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    as_sort(a,n);
    gk(a,n-k);
    sk(a,k);
    
    return 0;
}
void  as_sort(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            int temp;
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
   
   
}
void gk(int a[],int k)
{
  printf("4th largest element = %d\n",a[k]);
}
void sk(int a[],int k)
{
  printf("4th smallest element = %d\n",a[k-1]);
}

