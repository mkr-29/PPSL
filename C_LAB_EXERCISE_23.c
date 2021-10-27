#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int d,i;
    int g; //change the code as you may like but dont paste it as it is in your assignments
    for(i=1; i<=a && i<=b; ++i)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    printf("%d",g);
}
