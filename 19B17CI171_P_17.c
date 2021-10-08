#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;  //choose a variable of type int

    scanf("%d",&a);   //take in input for the variable

    (a%2==0)?printf("%d is even.",a):printf("%d is odd.",a);    //check if a is even or odd and print accordingly
  
    return 0;
}
