#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cp,sp;  //choose variables for cost price and selling price of type float

    scanf("%f",&cp);    //take input for cost price
    scanf("%f",&sp);    //take input for selling price

    float p,l;    //choose variables for profit and loss of type float
    p=sp-cp;    //calculate profit
    l=cp-sp;    //calculate loss

    float a;  //choose a variable to print if there is loss or profit
    a=(cp>sp)?printf("loss \n%0.2f",l):printf("profit \n%0.2f",p);  //compare if selling price is less than cost price, is yes then print loss or else print profit
    return 0;
}
