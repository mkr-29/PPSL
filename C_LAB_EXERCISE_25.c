#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    float s=0;
    scanf("%d",&a);
    for(b=1; b<=a; b++)   //change the code as you may like but dont paste it as it is in your assignments
    {
        s=s+(float)1/b;
    }
    printf("%0.2f",s);
    
}
