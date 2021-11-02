#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    long int p=1;
    if(a>=1 || a<=100 || b>=1 || b<=20)
    {
        for(i=1; i<=b; i++)
        {
            p=p*a;
        }
        printf("%ld",p);
    }//please change the code as you may like but please dont copy and paste it in your assignments(Try understanding it first)
    else
    {
        return 0;
    }
}
