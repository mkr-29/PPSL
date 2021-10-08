#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double pi,ar,r;   //choose varriables for type double
    pi = 3.1415926535;    //assigned value of pi to the variable pi
    scanf("%lf",&r);    //take an input for radius
    ar=pi*r*r;    //calculate area
    printf("%.10lf",ar);    //print area

}
