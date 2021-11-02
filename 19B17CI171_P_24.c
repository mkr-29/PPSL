#include<stdio.h>

//leap year
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a;
    
    if(a<1111 || a>9999)
    {
        printf("Outside the range");
    }
    else
    {//please change the code as you may like but dont copy and paste just like that in your assignments.(try understanding it first)
        if(b%4==0 & b%100!=0)
        {   
            printf("%d is a leap year.",a);
        }
        else if(b%400==0)
        {
            printf("%d is a leap year.",a);
        }
        else
        {
            printf("%d is not a leap year.",a);
        }
    }
}
