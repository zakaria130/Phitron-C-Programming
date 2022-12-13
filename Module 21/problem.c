#include<stdio.h>
#include<math.h>
int con1(int x)
{
    while (x>0)
    {
        int finding7;
        finding7=x%10;
        if(finding7==7)
        {
            return 1;
            break;
        }  
        x=x/10; 
    }
    return 0;
    
    
}
int con2(int x)
{
int sum=0;
while (x>0)
{
    sum+=x%10;
    x=x/10;
}
if (sum>10)
{
    return 1;
}
else
{
    return 0;
}



}
int con3(int y)
{
    int x=y%10;
    for (int i = 2; i < x; i++)
    {
        if (x%i==0)
        {
            return 0;
            break;
        }
        else if(x==2)
        return 1;
        else
        return 1;
    }
    
}
int main()
{
    int a;
    scanf("%d",&a);
    if(con1(a)==1 && con2(a)==1 && con3(a)==1)
    printf("My Number");
    else
    printf("no");
    printf("\n");
    printf("%d\n",con1(a));
    printf("%d\n",con2(a));
    printf("%d\n",con3(a));
    return 0;
}
