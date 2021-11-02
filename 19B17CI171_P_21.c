#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    double root1, root2;
    double d,r1;
    scanf(" %f",&a);
    scanf(" %f",&b);
    scanf(" %f",&c);

    d=(b*b)-(4*a*c);
    
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("root1 = %0.2f and root2 = %0.2f",root1,root2);
    }
    else if(d==0)
    {
        root1=(-b)/(2*a);
        root2=root1;
        printf("root1 = root2 = %0.2f",root2);
    }
    else
    {//please change the code as you may like but dont copy and paste just like that in your assignments.(try understanding it first)
        r1=(-b)/(2*a);
        d=-d;
        root1=(sqrt(d))/(2*a);
        root2=(sqrt(d))/(2*a);
        printf("root1 = %0.2f+%0.2fi and root2 = %0.2f-%0.2fi",r1,root1,r1,root2);
    }
}
