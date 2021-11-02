#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    if(N>=0 && N<=10000)
    {
        if(N%2 ^ 1)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
//please change the code as you may like but dont copy and paste just like that in your assignments.(try understanding it first)
    }
    else
    {
        return 0;
    }
}
