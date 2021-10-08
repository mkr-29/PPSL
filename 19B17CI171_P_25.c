#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,m,n;    //choose variables for type int
    int x1,y1;
    scanf("%d , %d",&x1 , &y1);   //take input for variables

    int x2, y2;
    scanf("%d , %d",&x2 , &y2);

    int x3, y3;
    scanf("%d , %d",&x3 , &y3);

    m=(y2-y1)/(x2-x1);  //apply the condition to find if all the points belong to the same line
    n=(y3-y2)/(x3-x2);
    a=(m==n)?printf("All 3 points lie on the same line"):printf("All 3 points do not lie on the same line");    //print the output accordingly
}
