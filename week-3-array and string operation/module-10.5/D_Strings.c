#include <stdio.h>
#include <string.h>

int main()
{
    char n[1001], m[1001];
    scanf("%s %s", &n, &m);

    int n_len = strlen(n);
    int m_len = strlen(m);

    printf("%d %d\n", n_len, m_len);
    printf("%s%s\n", n, m);

    // n first and last char
    char n_first_ch, n_last_ch;
    for (int i = 0; i < n_len; i++)
    {
        n_first_ch = n[0];
        n_last_ch = n[i];
    }

    // m first and last char
    char m_first_ch, m_last_ch;
    for (int i = 0; i < m_len; i++)
    {
        m_first_ch = m[0];
        m_last_ch = m[i];
    }

    // replace n using m value
    for (int i = 0; i < n_len; i++)
    {
        n[0] = m_first_ch;
    }

    // replace m using n value
    for (int i = 0; i < n_len; i++)
    {
        m[0] = n_first_ch;
    }

    printf("%s %s", n, m);

    return 0;
}