#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y;
    printf("enter your two input ");
    scanf("%d%d",&x,&y);
    printf("your numbers are x=%d and y=%d\n",x,y);
    if (x>y)
    {
        printf("x is larger");
    }
    else if (y>x)
    {
        printf("y is larger");
    }
    else{
         printf("they are equal");
    }
    
    return 0;
}
