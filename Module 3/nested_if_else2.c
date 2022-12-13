#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z;
    printf("Give x, y and z respectively\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("You are given x=%d, y=%d and z=%d\n",x,y,z);
    if (x>y && x>z)
    {
        printf("x is the largest");
    }
    else if (y>x && y>z)
    {
         printf("y is the largest");
    }
    else if (x==y && y==z)
    {
         printf("They are equal");
    }
    else
    {
         printf("z is the largest");
    }
    
    
    
    
    return 0;
}
