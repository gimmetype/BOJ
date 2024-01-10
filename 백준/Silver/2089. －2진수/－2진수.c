#include <stdio.h>

int main()
{
    int n, r, cp=99;
    char s[100];
    scanf("%d", &n);
    s[99]=0;
    while(n >= 2 || n < 0)
    {
        r = n%(-2);
        n = n/(-2);
        if(r < 0) { n++; r=1; }
        s[--cp]=r+'0';
    }
    s[--cp]=n+'0';
    puts(s+cp);
    return 0;
}