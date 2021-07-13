#include<stdio.h>
int main()
{
  int x=5,*p,**q,***r;
  p=&x;
  q=&p;
  r=&q;
  printf("Value of x=%d\n",***r);
}
