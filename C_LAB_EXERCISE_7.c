#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n1,n2;    //choose variables for 2 numbers to calculate sum and difference of type int

    scanf("%d",&n1);    //take input for n1
    scanf("%d",&n2);    //take input for n2

    int sum, diff;    //choose variables for sum and difference
    sum=n1+n2;    //calculate sum
    diff=n1-n2;    //calculate difference

    printf("%d\n",sum);   //print sum
    printf("%d\n",diff);    //print difference

    return 0;
}
