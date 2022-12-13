#include <stdio.h>
int main()
{
  int a,n, i = 3, count, c,j=4,k=0;

 // printf("Enter the number of prime numbers to print\n");
 scanf("%d", &a);
n=((a+1)*a)/2;
  if (n >= 1) {
   // printf("First %d prime numbers are:\n",n);
    printf("2\n");
  }

  for (count = 2; count <= n;)
  {
    for (c = 2; c <= i - 1; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
      printf("%d ", i);
      count++;
      if(count==j)
      {
    
      printf("\n");
      j+=3+k;
      k++;
      }
    }
    i++;
  }

  return 0;
}