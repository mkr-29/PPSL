#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    //INPUT TWO SIDES OF A RIGHT ANGLED TRIANGLE
    int side1;  //choose variable for side 1 of type int
    int side2;  //choose variable for side 2 of type int
    scanf("%d",&side1);   //take input form the user for side 1
    scanf("%d",&side2);   //take input form the user for side 1
    //CALCULATING HYPO 
    float square_hyopotenuse; //choose a variable for square of hypo
    float hypo;   //choose a variable for hypo
    square_hyopotenuse= (side1 * side1) + (side2 * side2 );   //calculate square of hypo
    hypo= sqrt(square_hyopotenuse);   //calculate hypo (sqrt used to find squareroot of square of hypo and it belongs to <math.h>)
    printf("%f",hypo);  //print the desired output
    return 0;
}
