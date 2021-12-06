#include<stdio.h>
int gcd(int x, int y){
    int min,max;
    max=(x>y)?x:y;
    min=(x>y)?y:x;
    if(min!=0){
        return gcd(min,max%min);
    }
    else{
        return max;
    }
}//edit the code as you may like
int main(){
    int a,b;
    scanf("%d\n%d",&a,&b);
    if(a<-1000 || a>1000){
        printf("Outside the range");
    }//dont just copy and paste
    else{
        if(a<0){
            a=a*-1;
        }
        else if(b<0){
            b=b*-1;
        }
        else{
            ;
        }
        printf("GCD = %d",gcd(a,b));
    }
}
