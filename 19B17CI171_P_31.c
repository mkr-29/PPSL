#include<stdio.h>

int main(){
    int a,b,i,r=1,m;    //initialised a,b to take input in int data type
    scanf("%d \n %d", &a, &b);  //taken input in a,b from user
    m=(a>b)?b:a;    //compared if a is greater than b... if yes, then put m=b else put m=a... in short finding the smaler number
    if(a<-1000 || a>1000 || b<-1000 || b>1000){     //checked if a<-1000 or a>1000 or b<-1000 or b>1000... if any of the condition becomes true the following output will be printed.
        printf("Outside the range");        //printed this output if any of the above condition is true
    }
    else{       //else doing this if all the above conditions are false.
        if(m<0){        //checked if m<0 ie. no is negative...  checking if the smaller number is negative or not
            m=m*(-1);   //putting m = m*(-1), in short making the number positive
        }
        else{       //if the above condition is false
            m=m;    //putting m=m
        }//please change the code as you may like
        for(i=1; i<=m; i++){        //starting a for loop form 1 to the smaller number that user have inputted
            if(a%i==0 && b%i==0){       //checking if any number less than the smaller number divides the two given numbers completely.ie. leaves remainder 0
                r=i;        //then putting r=i as i is the HCF the highest common factor which divides both the nos
            }//just dont copy and paste in your assignments.
        }printf("GCD = %d",r);      ///printing the result.
    }
}
