#include<stdio.h>
void prime(int x){
    int i,p=0;
    if(x<0 || x>100){
        printf("Outside the range");
    }//dont just copy and paste
    else if(x==0 || x==1){
        printf("Not prime");
    }//edit the code as you may like
    else{
        for(i=2; i<=x/2; i++){
            if(x%i!=0){
                continue;
            }
            else{
                p=1;
            }
        }
        if(p==1){
            printf("Not prime");
        }
        else{
            printf("Prime");
        }
    }
}//Source : //source: https://bit.ly/3Dnjzcq
int main(){
    int a;
    scanf("%d",&a);
    prime(a);
}
