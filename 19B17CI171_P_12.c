#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Size of int: %lu bytes\n", sizeof(int));    //print size of int in bytes (sizeof keyword is used to find size in bytes of an other arithmatic keyword)
    printf("Size of float: %lu bytes\n", sizeof(float));    //print size of float in bytes
    printf("Size of double: %lu bytes\n", sizeof(double));  //print size of double in bytes
    printf("Size of char: %lu byte\n", sizeof(char));   //print size of char in bytes
    return 0;
}
