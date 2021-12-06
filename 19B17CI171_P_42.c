#include<stdio.h>
#include<math.h>
int main(){
    int i;
    float x,s=0,a;
    scanf("%f",&x);
    if(x>0 && x<51){
        a=(x-1)/x;
        for(i=2; i<=7; i++){
            s=s+0.5*(pow(a,i));
        }
        s=s+a;
        printf("Log(%lg) = %0.2f",x,s);
    }//dont just copy and paste the code
    else{
        printf("Outside the range");
    }//edit the code as you may like.
}
