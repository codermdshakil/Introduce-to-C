#include <stdio.h>

void fun(int x){
    printf("fun - %d\n", x); // 10
}
int main()
{
    int x = 10;
    
    fun(x);
    x = 20;
    printf("M - %d\n", x);
    return 0;
}