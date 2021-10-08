#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int did,div;    //choose variables for dividend and divisor

    scanf("%d",&did);   //take input for dividend
    scanf("%d",&div);   //take input for divisor

    float q;    //choose a variable for quotient
    q=(float)did/div;   //calulate quotient

    printf("quotient\n");   //print the desired output
    printf("%0.2f",q);    //print the desired output for remainder ("0.2f" is used to determine the number of digits after decimal, 2 digits after decimal in this case)
    return 0;
}
