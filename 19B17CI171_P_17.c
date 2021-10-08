#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;  //choose a variable of type int

    scanf("%d",&a);   //take in input for the variable

    if(a%2==0)
    {
        printf("%d is even.",a);
    }
    else
    {
        printf("%d is odd.",a);
    }
  
    return 0;
}
