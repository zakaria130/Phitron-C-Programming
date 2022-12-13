#include<stdio.h>
int main()
{

    int array[10]={5,4,3,7,6,2,1,8,9,10};
    int i,j,min,x=0,sorted_array[10];
    for(j=0;j<10;j++)
    {
        min=array[1];
        for(i=0;i<10;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
            x=i;
        }
    }
    sorted_array[j]=min;
    array[x]=999;

    }
    for(i=0;i<10;i++)
    {
        printf("%d ",sorted_array[i]);
    }

}
