#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s", &s);

    int cnt[26] = {0};

    for (int i = 0; i < strlen(s) ; i++)
    {
        int val = s[i] - 'a';
        // printf("%d ", s[i]-'a' );
        s[val]++;
    }




    


    return 0;
}