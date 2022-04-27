#include <stdio.h>
#include <string.h>
#include <math.h>
 
int N;
char str[51];
 
void input()
{
    scanf("%s", str);
}
 
void solve()
{
    int i, sum = 10;
 
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == str[i - 1]) sum += 5;
        else
            sum += 10;
    }
 
    printf("%d", sum);
}
 
int main()
{
    input();
    solve();
 
    return 0;
}