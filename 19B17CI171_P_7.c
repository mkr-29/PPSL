#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i;    //choose a variable for type int
    scanf("%d",&i);   //take an input for variable
    long int li;    //choose a variable for type long int
    scanf("%ld",&li);   //take an input for variable
    short int si;   //choose a variable for type short int
    scanf("%hd",&si);   //take an input for variable
    unsigned int ui;    //choose a variable for type unsigned int
    scanf("%u",&ui);    //take an input for variable
    float f;    //choose a variable for type float
    scanf("%f",&f);   //take an input for variable
    double d;     //choose a variable for type double
    scanf("%lf",&d);    //take an input for variable
    char c;     //choose a variable for type char
    scanf("   %c",&c);    //take an input for variable

    printf("%d\n",i);   //print the desired output for type int
    printf("%ld\n",li);   //print the desired output for type long int
    printf("%hd\n",si);   //print the desired output for type short int
    printf("%u\n",ui);    //print the desired output for type unsigned int
    printf("%.4f\n",f);   //print the desired output for type float
    printf("%.10lf\n",d);   //print the desired output for type double
    printf("%c",c);   //print the desired output for type char
}
