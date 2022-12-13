#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int array[n];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    int i,j;
    int a,b,temp;
   
    for ( j = 0; j < n; j++)
    {
       for(i=0;i<n-1;i++)
    {
        a=array[i];
    b=array[i+1];
    if (a<b)
    {
        temp=a;
        a=b;
        b=temp;
         array[i]=a;
    array[i+1]=b;
    }

    }
    }
    
    
   
    int ans=0;
   if (array[0]%2==0)
   {
    for ( i = 1; i < n; i++)
    {
        if (array[i]%2==0)
        {
            ans=array[0]+array[i];
            break;
        }
        
    }
    
   }
   else if (array[0]%2!=0)
   {
    for ( i = 1; i < n; i++)
    {
        if (array[i]%2==0)
        {
            ans=array[0]+array[i];
            break;
        }
        
    }
    
   }
   
    printf("%d",ans);

}
