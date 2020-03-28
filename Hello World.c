/*Sample Input : Welcome to C programming.
Sample output : Hello, World!
Welcome to C programming.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!");  
    printf("\n%s",s);  
    return 0;
}
