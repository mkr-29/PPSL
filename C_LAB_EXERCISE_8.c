#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a;    //choose a variable for type int
    scanf("%d",&a);   //take input for variable
    if(a<10)    //check if the variable contains an integer less than 10
    {
        if(a==1)    //check if a conatins value 1
        {
            printf("one");    //print the desired output for the above constraint
        }
        else if(a==2)   //check if a conatins value 2
        {
            printf("two");    //print the desired output for the above constraint
        }
        else if(a==3)   //check if a conatins value 3
        {
            printf("three");    //print the desired output for the above constraint
        }
        else if(a==4)   //check if a conatins value 4
        {
            printf("four");   //print the desired output for the above constraint
        }
        else if(a==5)   //check if a conatins value 5
        {
            printf("five");   //print the desired output for the above constraint
        }
        else if(a==6)   //check if a conatins value 6
        {
            printf("six");    //print the desired output for the above constraint
        }
        else if(a==7)   //check if a conatins value 7
        {
            printf("seven");    //print the desired output for the above constraint
        }
        else if(a==8)   //check if a conatins value 8
        {
            printf("eight");    //print the desired output for the above constraint
        }
        else if(a==9)   //check if a conatins value 9
        {
            printf("nine");   //print the desired output for the above constraint
        }
        
    }
    if(a>10)    //check if a contains value more than 10
    {
        printf("greater than 9");   //print the desired output for the above constraint
    }
}
