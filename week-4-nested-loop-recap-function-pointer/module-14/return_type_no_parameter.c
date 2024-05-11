#include <stdio.h>
//2. return_type(yes), parameter(no)
// int sum1(){
//     int x, y;
//     scanf("%d %d", &x, &y);

//     int result = x+ y;
//     return result;
// }

 // with void means we can't sent value as a arguments

int sum1(void){
    int x, y;
    scanf("%d %d", &x, &y);

    int result = x+ y;
    return result;
}

int main()
{
     
    // called return_tyes(yes), parameter(no) sum func
    int rs = sum1(); 
    printf("%d", rs);


    return 0;
}