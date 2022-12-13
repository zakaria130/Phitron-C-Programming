#include<stdio.h>
#include<string.h>
int main()
{
    char strings[1001];
    fgets(strings,sizeof(strings),stdin);
    int k;
    scanf("%d",&k);
    int n=strlen(strings);
    // printf("%d\n",n);
    for (int i = 0; i <n-1; i++)
    {
        if (strings[i]+k<=122)
        {
            strings[i]=strings[i]+k;
        }
        else if (strings[i]+k>122)
        {
            strings[i]=strings[i]+k-26;
        }
        
        
    }
    puts(strings);
    
    
    return 0;
}
