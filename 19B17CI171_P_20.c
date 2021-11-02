#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,r,sum=0,temp;    
    
    scanf("%d",&n);    
    temp=n;    
    if(n<10000 || n>99999)
    {
        printf("Outside the range.");
    }
    else
    {
        while(n>0)    
        {    
            r=n%10;    
            sum=(sum*10)+r;    
            n=n/10;    
        }    

        if(sum==temp)
        {
            printf("%d",sum);
            printf("\nSame");
        }
        else
        {
            printf("%d",sum);
            printf("\nDifferent");
        }
    }
}
