#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) 
{
 int i,j,a,b,and,or,xor,A=0,B=0,C=0;
 for(i =1; i<n;i++)
 {
     a=i;
     for(j=i+1;j<=n;j++)
    {
      b=j;
      and=a&b;
      or=a|b;
      xor=a^b;
      if(and<k && and>A )
      {
          A = and;
      }
      if(or<k && or>B)
      {
          B = or;
      }
      if(xor<k && xor>C)
      {
          C = xor;
      }
    }
 }
printf("%d\n%d\n%d",A,B,C);
}
int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

