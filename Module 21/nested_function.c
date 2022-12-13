#include<stdio.h>
#include<math.h>
float f(int x,int y);
int absulate(int x);
int main()
{
    int x=12,y=7;
    float ans = f(x,y);
    printf("%f",ans); 
    return 0;
}
float f(int x,int y)
{
    int tempans=absulate(x-3)+(y+4)*(y+4);
    return sqrt(tempans);
}
int absulate(int x)
{
    if (x>=0)
    {
        return x;
    }
    else
    {
        return (-1)*x ;
    }
    
}
