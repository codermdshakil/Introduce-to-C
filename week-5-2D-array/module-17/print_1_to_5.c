#include <stdio.h>
void fun(int i){
    if (i==10)
    {
        return printf("%d\n", i);
    }
    else{
        printf("%d\n", i);
        fun(i+1);
    }
    
}
int main()
{
    fun(1);
    return 0;
}