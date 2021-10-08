#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,t;    //choose variables for type int
    double r;   //choose variable for type double

    scanf("%d",&p);   //take input for principle amount for type int
    scanf("%lf",&r);    //take input for rate of interest for type double
    scanf("%d",&t);     //take input for time in years for type int

    double si;    //choose variable for simple interest of type double
    si=p*r*t/100;   //calculate simple interest

    printf("%.2lf",si);   //print the desired output for simple interest
    return 0;
}
