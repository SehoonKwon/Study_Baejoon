#include <stdio.h>
 
int N;
int Array[6][6];
int target[26];
 
void input()
{
    int i, j;
 
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &Array[i][j]);
 
    int cnt = 1;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &target[cnt]);
            cnt++;
        }
}
 
void check(int x)
{
    int i, j;
 
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            if (Array[i][j] == x)
            {
                Array[i][j] = 0;
                return;
            }
        }
}
 
int Bingo()
{
    int i, j, flag =0;
    int cnt = 0;
 
    //가로
    for (i = 0; i < 5; i++)
    {
        flag = 1;
        for (j = 0; j < 5; j++)
            if (Array[i][j] != 0)
            {
                flag = 0;
                break;
            }
 
        if (flag == 1) cnt++;
    }
 
    //세로
    for (i = 0; i < 5; i++)
    {
        flag = 1;
        for (j = 0; j < 5; j++)
            if (Array[j][i] != 0)
            {
                flag = 0;
                break;
            }
 
        if (flag == 1) cnt++;
    }
     
    //대각선 우상향
    flag = 1;
    for (i = 0; i < 5; i++)
    {
        if (Array[4 - i][i] != 0)
        {
            flag = 0;
            break;
        }
    }
 
    if (flag == 1) cnt++;
 
    //대각선 우하향
    flag = 1;
    for (i = 0; i < 5; i++)
    {
        if (Array[i][i] != 0)
        {
            flag = 0;
            break;
        }
    }
 
    if (flag == 1) cnt++;
 
    return cnt;
}
 
void solve()
{
    int i, c=0;
 
    for (i = 1; i < 26; i++)
    {
        check(target[i]);
        c = Bingo();
        if (c >= 3) break;
    }
 
    printf("%d", i);
}
 
int main()
{
    input();
    solve();
    return 0;
}