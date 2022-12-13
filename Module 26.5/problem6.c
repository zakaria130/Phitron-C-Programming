#include<stdio.h>
int main()
{
 char a[1001];
 scanf("%s",a);
 for (int i = 0; a[i] !='\0'; i++)
 {
    if (a[i]%2==0)
        printf("%c",a[i]-32);
    else
        printf("%c",a[i]);
        printf("%d ",a[i]);
 }
    return 0;
}
