#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,N;    //choose 2 variables for type int

    scanf("%d",&M);   //take input for 1st int
    scanf("%d",&N);   //take input for 2nd int

    int a,r=M%N;    //choose int for remainder and one to print if remainder is 1 or 0

    a=(r==1)?printf("%d",r):printf("%d",r);   //comapre remainder variable if it is equal to 1, if yes then print 1 or else print 0
    // Result = Binary Condition ? valueReturnedIfTrue : valueReturnedIfFalse;
    return 0;
}
