#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,e,f,g,day;
    double d,h;
    printf("Give your date\n");
    scanf("%d",&a);
    
    printf("Give your month\n");
    scanf("%d",&b);
    
    printf("Give your year\n");
    scanf("%d",&c);
    f=c-1900;
    
    d=f/4;
    
    h = floor(d);
    
    if (b==1)
    {
        g=0;
        printf("%d/January/%d",a,c);
    }
    else if (b==2)
    {
        g=3;
        printf("%d/February/%d",a,c);
    }
    else if (b==3)
    {
        g=3;
        printf("%d/March/%d",a,c);
    }
    else if (b==4)
    {
        g=6;
        printf("%d/April/%d",a,c);
    }
    else if (b==5)
    {
        g=1;
        printf("%d/May/%d",a,c);
    }
    else if (b==6)
    {
        g=4;
        printf("%d/June/%d",a,c);
    }
    else if (b==7)
    {
        g=6;
        printf("%d/July/%d",a,c);
    }
    else if (b==8)
    {
        g=2;
        printf("%d/August/%d",a,c);
    }
    else if (b==9)
    {
        g=5;
        printf("%d/September/%d",a,c);
    }
    else if (b==10)
    {
        g=0;
        printf("%d/October/%d",a,c);
    }
    else if (b==11)
    {
        g=3;
        printf("%d/November/%d",a,c);
    }
    else if (b==12)
    {
        g=5;
        printf("%d/December/%d",a,c);
    }
    else
    {
        printf("Invalid Month");
    }
    
printf("\n");
     e=(a+g+f+h);
    
     day=e%7;
    
    if(day==1){
        printf("Monday");
    }
    else if (day==2)
    {
        printf("Tuesday");
    }
    else if (day==3)
    {
        printf("Wednesday");
    }
    else if (day==4)
    {
        printf("Thursday");
    }
    else if (day==5)
    {
        printf("Friday");
    }
    else if (day==6)
    {
        printf("Saturday");
    }
    else{
        printf("Sunday");
    }

    return 0;
}