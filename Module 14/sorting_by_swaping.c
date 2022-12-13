#include<stdio.h>
int main()
{

    int array[10]={5,4,3,7,6,2,10,8,9,1};
    int i,j;
    int a,b,temp;
   
    for ( j = 0; j < 10; j++)
    {
       for(i=0;i<9;i++)
    {
        a=array[i];
    b=array[i+1];
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
         array[i]=a;
    array[i+1]=b;
    }

    }
    }
    
    
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
   
    

}
