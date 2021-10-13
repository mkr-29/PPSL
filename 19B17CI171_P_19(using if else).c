#include<stdlib.h>
#include<stdio.h>

int main()    // *******************Please Change variables or anything you want********************* //
{
    int x;
    scanf("%d",&x);
    if(x>=1000)
    {
        if(x<5000)
        {
            printf("hugely positive");
        }
        else
        {
            printf("Outside the range");
        }
    }
    else if(x<=999 && x>=100)
    {
        printf("very positive");
    }
    else if(x<100 && x>0)
    {
        printf("positive");
    }
    else if(x==0)
    {
        printf("zero");
    }
    else if(x<0 && x>-100)
    {
        printf("negative");
    }
    else if(x<=-100 && x>=-999)
    {
        printf("very negative");
    }
    else if(x<=-1000)
    {
        if(x>-5000)
        {
            printf("hugely negative");
        }
        else
        {
            printf("Outside the range");
        }
    }
}
