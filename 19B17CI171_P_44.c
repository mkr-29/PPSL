#include<stdio.h>
int fact(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    if(a>500){
        printf("Outside the range");
    }
    else if(a<0){
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else{
        printf("Factorial of %d = %d",a,fact(a));
    }
}
