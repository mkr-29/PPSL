#include<stdio.h>

int main(){
    int a,b,i,r=1,m;
    scanf("%d \n %d", &a, &b);
    m=(a>b)?b:a;
    if(a<-1000 || a>1000 || b<-1000 || b>1000){
        printf("Outside the range");
    }
    else{
        if(m<0){
            m=m*(-1);
        }
        else{
            m=m;
        }//please change the code as you may like
        for(i=1; i<=m; i++){
            if(a%i==0 && b%i==0){
                r=i;
            }//just dont copy and paste in your assignments.
        }printf("GCD = %d",r);
    }
}
