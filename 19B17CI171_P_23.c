#include<stdio.h>

int main()
{
    int N1,N2;
    scanf("%d",&N1);
    scanf("%d",&N2);

    if(N1>=-10000 || N1<=10000 || N2>=-10000 || N2<=10000)
    {//please change the code as you may like but dont copy and paste just like that in your assignments.(try understanding it first)
        if(N1 ^ N2)
        {
            printf("Different");
        }
        else
        {
            printf("Same");
        }
    }
    else
    {
        return 0;
    }
}
