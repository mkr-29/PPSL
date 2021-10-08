#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;    //choose variables for type float
    scanf("%f",&a);   //take input for variables
    scanf("%f",&b);

    long int c;   //choose a variable for long int
    c=a+b;    //calculate sum

    printf("%ld",c);    //print the desired output

    return 0;
}
