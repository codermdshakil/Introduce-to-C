#include <stdio.h>


int sum(int x,int y){
    return x+y;
}

int main()
{
    int rs = sum(3, 5);
    printf("%d and %d sum is %d", 3,5,rs);
    return 0;
}