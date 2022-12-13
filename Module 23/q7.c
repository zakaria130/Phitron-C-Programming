#include<stdio.h>
void asc_sort(int[],int);
int median(int [],int);
int main()
{   
    int array[]={3, 13, 7, 5, 21, 23, 39, 23, 40, 23, 14, 12, 56, 23, 29};
    int n = sizeof(array)/sizeof(array[0]);
    printf("%d\n",n);
    
    asc_sort(array,n);
    for(int i=0;i<14;i++)
        {
        printf("%d ", array[i]);
        }
    
    printf("\n%d",median(array,n));

    return 0;
}
int median(int* a,int n)
{
    asc_sort(a,n);
    
    if (n%2==0)
    {
        return (a[(n/2)-1]+a[n/2])/2;
    }
    else
    {
         return a[n/2];
        
    }
    

}
void asc_sort(int* a,int n)
{
    
    int i, j, temp;
    for(i=0;i< n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
}