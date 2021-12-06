#include<stdio.h>
void prime(int x){
    int i,p=0;
    for(i=2; i<=x/2; i++){
        if(x%i==0){
            p=1;
        }
        else{
            p=0;
        }
    }
    if(p==1){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    if(a<=0 || a>=100){
        printf("Outside the range");
    }
    else{
        prime(a);
    }
}
