#include<stdio.h>
#include<stdlib.h>

int main()
{
    int f,i=1,j;
    scanf("%d",&f);
    
    if(f<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    
    else if(f>=0 && f<500)
    {
        
        if(f==0)
        {//change the code as you may like
            printf("Factorial of %d = %d",f,i);
        }
        
        else if(f>0)
        {//dont paste the code as it is in your assignemnts
            for(j=1; j<=f; j++)
            {
                i=i*j;
            }
            printf("Factorial of %d = %d",f,i);
        }
        
    }
    else{
        printf("Outside the range");
    }
}
