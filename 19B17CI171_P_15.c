#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1 , N2; //choose 2 variables for the type int 
    float D;    //choose a variable for type float to calculate division

    scanf("%d",&N1);    //take input for 1st no.
    scanf("%d",&N2);    //take input for 2nd no.

    D= (float)N1/N2;    //calculate division

    printf("%f",D);   //print the desired output
    return 0;
}
