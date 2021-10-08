#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;  //choose variables for type int
    
    scanf("%d",&a);   //take an inpur form the user
  
    b=a%10;   //calculation for unit place of the given input
    c=a/10;   //calculation for the tenth place for the given input
  
    printf("unit\n");   //print the desired output
    printf("%d\n",b);   //print the desired output for unit place
    printf("tenth\n");    //print the desired output
    printf("%d\n",c);   //print the desired output for tenth place

    return 0;
}
