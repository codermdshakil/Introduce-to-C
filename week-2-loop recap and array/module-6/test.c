#include <stdio.h>

int main()
{
    int i = 10;
    // int x = i++; // post increment
    // int x = ++i; // pre increment
    int x = i--; // post decrement
    int x = --i; // pre decrement

    printf("x-%d i-%d \n",x , i);
    

    return 0;
}