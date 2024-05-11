#include <stdio.h>

    // global scope
int x = 500;

void myFun(void){
    // block scope 
    int s = 100;
    printf("Fun s address - %p\n",s);
}

int main()
{
    int s = 300;
    myFun();
    printf("Main s address - %p\n",s);
    printf("%d Value of x\n", x);
    return 0;
}