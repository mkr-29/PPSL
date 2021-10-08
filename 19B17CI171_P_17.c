#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;  //choose a variable of type int

    scanf("%d",&a);   //take in input for the variable

    if(a%2==0)      //check if the remainder comes out to be zero if divided by 2
    {
        printf("%d is even.",a);        //print the desired output for even
    }
    else        //else print desired output for odd
    {
        printf("%d is odd.",a);
    }
  
    return 0;
}
