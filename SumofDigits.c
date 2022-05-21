#include<stdio.h>
void main()
{
  int n, sum, rem;
  printf("Enter a number, n: \n");
  scanf("%d", &n);
  sum=0;
  while(n!=0)
    {
      rem = n%10;
      sum+=rem;
      n=n/10;
    }
  printf("Sum of the digits = %d", sum);
}
