#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend, divisor;    //choose variables for divident and divisor of type int

    scanf("%d",&dividend);    //take input for dividend
    scanf("%d",&divisor);   //take input for divisor

    int quo,rem;  //choose  variables for quotient and remainder

    quo=dividend/divisor;   //calculate quotient
    rem=dividend%divisor;   //calculate remainder

    printf("Quotient = %d\n",quo);    //print the desired output for quotient
    printf("Remainder = %d",rem);     //print the desired output for remainder
    return 0;
}
