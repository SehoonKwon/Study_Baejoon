#include <stdio.h>
 
int N, T;
 
void input()
{
    scanf("%d", &T);
}
 
void solve()
{
    if ((T % 10) != 0)
    {
        printf("-1");
        return;
    }
 
    int cnt_A = 0, cnt_B=0, cnt_C = 0;
    while (T > 0)
    {
        if (T >= 300)
        {
            T -= 300;
            cnt_A++;
        }
        else if (T >= 60)
        {
            T -= 60;
            cnt_B++;
        }
        else if (T >= 10)
        {
            T -= 10;
            cnt_C++;
        }
 
    }
 
    printf("%d %d %d", cnt_A, cnt_B, cnt_C);
}
 
int main()
{
    input();
    solve();
 
    return 0;
}