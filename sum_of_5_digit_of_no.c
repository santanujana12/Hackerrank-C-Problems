#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,s=0,m,d;
    scanf("%d", &n);
    m=n;
    while(n>0)
    {
        d = n%10;
        s = s+d;
        n = n/10;
    }
    printf("%d",s);
    return 0;
}

