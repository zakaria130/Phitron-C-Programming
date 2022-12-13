#include<stdio.h>
#include<string.h>
char grade(int mark)
{
    if (mark>=80 && mark<=100)
    {
        return 'A';
    }
    else if(mark>=60 && mark<=79)
    {
        return 'B';
    }
    else if (mark>=40 && mark<=59)
    {
        return 'C';
    }
    else
    {
        return 'F';
    } 
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%c",grade(n));
    return 0;
}
