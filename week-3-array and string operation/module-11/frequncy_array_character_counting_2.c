#include <stdio.h>
#include <string.h>

int main()
{
    char n[1001];
    scanf("%s", &n);

    int cnt[26] = {0};

    for (int i = 0; i < strlen(n); i++)
    {
        int val = n[i] - 'a'; // a means 97
        cnt[val]++;
    }

    for (int i = 0; i < strlen(n); i++)
    {
        int value = n[i]-97;
        if (cnt[value] != 0)
        {
            printf("%c - %d\n", value+'a', cnt[value]);
        }
        cnt[value] = 0; 
    }
    

    // for (int i = 0; i < 26; i++)
    // {
    //     int result = cnt[i] + 97;
    //     if (cnt[i] != 0)
    //     {
    //         printf("%c - %d\n", i + 'a', cnt[i]);
    //     }
    // }

    return 0;
}