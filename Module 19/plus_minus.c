#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int n;
    scanf("%d",&n);
    char nsign[n];
    for(int i=0;i<n;i++)
    {
        scanf("%c",nsign[i]);
    }
    int a=0,b=0;
    int arrayp[n];
    int arraym[n];
    for(int i=0;i<n;i++)
    {
        arrayp[i]=0;
        arraym[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        
        if(nsign[i]=='+')
        {
            a++;
            arraym[i]=b;
            b=0;
        }
        else if(nsign[i]=='-')
        {
            b++;
            arrayp[i]=a;
            a=0;
        }
    }
    int maxxp=arrayp[0];
    for(int i=1;i<n;i++)
    {
        if(maxxp<arrayp[i])
        {
            maxxp=arrayp[i];
        }
    }
        int maxxm=arraym[0];
    for(int i=1;i<n;i++)
    {
        if(maxxm<arraym[i])
        {
            maxxm=arraym[i];
        }
    }
    if(maxxm>maxxp)
    {
        printf("%d",maxxm);
    }
    else if (maxxp>maxxm)
    {
        printf("%d",maxxp);
    }
    return 0;
}
