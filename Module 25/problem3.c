#include<stdio.h>
#include<math.h>
#include<string.h>
void my_func(char [], int);
int main(int argc, char const *argv[])
{
    char s[101];
    scanf("%s",s);
    
    int n=strlen(s);
    
    my_func(s,n);
    return 0;
}
void my_func(char s[], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=s[i]-96;
    }
    
    double x =log10(sum)/log10(2);
    int x1=floor(x);
    if (sum==pow(2,x1))
        printf("Yes\ncost=2^%d",x1);

    else
        printf("No");

}
