#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a,b,c;    //choose variables for 2 int
    scanf("%d",&a);   //take input for 1st variable
    scanf("%d",&b);   //take input for 2nd variable
    
    c=a;
    a=b;
    b=c;
    printf("%d\n",a);   //print numbers in reverse order
    printf("%d",b);
}
