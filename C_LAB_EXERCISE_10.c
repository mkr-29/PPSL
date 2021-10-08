#include<stdio.h>

int main()
{
    int a,b,c,test,min;   //choose variables for type int
    scanf("%d",&a);   //take input for 1st no.
    scanf("%d",&b);   //take input for 2nd no.
    scanf("%d",&c);   //take input for 3rd no.

    min=(a<b)?a:b;    //assign the value of smaller number to min
    test=(min<c)?min:c;   //assign the value of smaller number to  test
    printf("%d",test);  //print the smallest number
}
