#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=0;

    if(n<1 || n>99999)
    {
        printf("Outside the range");
    }
    else
    {//please change the code as you may like but dont copy and paste just like that in your assignments.(try understanding it first)
        while(n>0)
        {
            n=n/10;
            i=i+1;
        }
        printf("Number of digits: %d",i);
    }
}
