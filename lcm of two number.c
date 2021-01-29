#include <stdio.h>

int GCD(int a, int b)
{
if (a == 0 || b == 0)
return 0;

if (a == b)
return a;

if (a > b)
return GCD(a-b, b);
return GCD(a, b-a);
}

int LCM(int a, int b)
{
return (a*b)/GCD(a, b);
}

int main()
{
int a,b;
printf(�\nEnter two numbers : �);
scanf(�%d %d�,&a,&b);
printf(�\nLCM of %d and %d is %d \n�, a, b, LCM(a, b));
return 0;
}
