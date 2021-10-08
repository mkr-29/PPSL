#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int bs;
    double da,hra,gs;
    scanf("%ld",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("%lg",gs);

}
