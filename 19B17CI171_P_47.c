#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}//edit the code as you may like
int main(){
    int x,y;
    scanf("%d\n%d",&x,&y);
    if(x<1 || x>100 || y<1 || y>80){
        printf("Outside the range");
    }//just dont copy and paste
    else{
        swap(&x,&y);
        printf("First number is %d\n",x);
        printf("Second number is %d",y);
    }
}
