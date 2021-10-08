#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;      //choose a variable for type int

    scanf("%d",&a);     //take input for variable

    (a%2==0)? printf("%d is even.",a):printf("%d is odd.",a);       //check if the variable is even or off and print the output accordingly

    return 0;
}
