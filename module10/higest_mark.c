#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,highest_mark;
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++)
    {
        marks[i]=0;
        scanf("%d",&marks[i]);
    }
    highest_mark=marks[0];
    for(i=1;i<n;i++)
    {
        if (marks[i]>highest_mark)
        {
            highest_mark=marks[i];
        }
        
        
        
    }
   //printf("%d\n",highest_mark);
   for ( i = 0; i < n; i++)
   {
    printf("%d ",highest_mark-marks[i]);
   }
   

    return 0;
}
