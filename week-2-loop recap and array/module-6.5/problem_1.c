#include <stdio.h>

int main()
{

    // take character
    char ch;
    scanf("%c", &ch);

    // convert character to ascii code
    int ascii_code = ch;
    // next character
    int next_character = ascii_code + 1;

    printf("%c\n", next_character);
    return 0;
}
