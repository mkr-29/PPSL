#include<stdlib.h>
#include<stdio.h>

int main()
{
    int x,a;    //choose a variable for type int
    scanf("%d",&x);   //take input for the variable

    a=(x>=1000 && x<=5000)?printf("hugely positive"):0;   //print the outputs accordingly
    a=(x>=100 && x<=999)?printf("very positive"):0;
    a=(x>0 && x<100)?printf("positive"):0;
    a=(x==0)?printf("zero"):0;
    a=(x<0 && x>-100)?printf("negative"):0;
    a=(x<=-100 && x>=-999)?printf("very negative"):0;
    a=(x<=-1000 && x>=-5000)?printf("hugely negative"):0;
    a=(x>5000)?printf("Outside the range"):0;
    a=(x<-5000)?printf("Outside the range"):0;
}
