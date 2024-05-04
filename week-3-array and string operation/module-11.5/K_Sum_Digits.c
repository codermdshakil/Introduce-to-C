#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    char x[1000001];
    scanf("%s",&x);
    
    int sum = 0;
    for (int i = 0; i < strlen(x) ; i++)
    {
        sum += x[i]-48;
    }

    printf("%d",sum);

    return 0;
}