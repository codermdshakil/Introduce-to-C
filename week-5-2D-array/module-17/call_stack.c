#include <stdio.h>

void world(){
    printf("world start\n");
    printf("world end\n");
}

void hello(){
    printf("hello start\n");
    world();
    printf("hello end\n");
}

int main()
{
    printf("main start\n");
    hello();
    printf("main end");
    return 0;
}
/**
 * Call Stack
 * 1.main()
 * 2.hello()
 * 3.world()
 * 4. end
*/

// main start
// hello start
// world start
// world end
// hello end
// main end