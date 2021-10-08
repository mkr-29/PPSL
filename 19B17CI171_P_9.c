#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r;   //chosoe a variable for radius of type double
    double pi=3.1415926535;   //choose a variable for pi of type double

    scanf("%lf",&r);  //take input for radius

    double area;    //choose variable for area of type double
    area=pi*r*r;    //calculate area

    printf("%.10lf",area);    //print the desired output of area("%.10lf" used to determine the number of digits after decimal in this case it is 10 after decimal)
    return 0;
}
