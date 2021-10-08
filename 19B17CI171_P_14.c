#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;    //choose a variable for in int
    float b;    //choose a variable for type float

    scanf("%d",&a);   //take input for int
    scanf("%f",&b);   // tale input for float

    float c;    //choose a variable to find division of the 2 given values
    c=a/b;    //calculate division

    printf("%0.3f",c);    //print the required statement
    return 0;
}
