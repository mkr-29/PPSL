#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    float s=0;
    int j,f;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {     //please change the code as you may like. but dont just copy and paste it in your assignments.
        f=1;
        for(j=1; j<=i; j++)
        {
            f=f*j;
        }
        s=s+1/(float)f;
    }
    printf("%0.8f",s);
    
}
