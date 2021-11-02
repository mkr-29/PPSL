#include<stdio.h>

int main()
{
    int a,i,s=0;
    

    do
    {
        scanf("%d",&a);    
    }while (a<0);
    
    if(a==0 || a>500)
    {
        printf("Outside the range");
    }
    
    else
    {//please change the code as you may like but please dont copy and paste it in your assignments(Try understanding it first)
        for(i=1; i<=a; i++)
        {
            s=s+i;
        }
        printf("Sum = %d",s);
    }
}
