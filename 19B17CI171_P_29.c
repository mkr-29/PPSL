#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int i;

    if(a<1 || a>20)
    {
        printf("Outside the range");
    }
//please change the code as you may like but please dont copy and paste it in your assignments(Try understanding it first)
    else
    {
        for(i=1; i<=b; i++)
        {
            printf("%d * %d = %d",a,i,a*i);
            printf("\n");
        }
    }
}
