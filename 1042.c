#include <stdio.h>


int countones(int x)
{
    int cnt = 0;
    long long int i;
    int s = 8*(sizeof(x));
    int m = 1<<(s-1);
    for(i = 0; i < s; i ++)
    {
        if((x & m) != 0)
        {
            cnt++;
        }
        x = x << 1;
    }
    return cnt;
}

int main()
{
    int kases, kaseno = 0;
    long long int num, i, res;

    scanf("%d", &kases);
    while(kases--)
    {
        scanf("%lld", &num);
        for(i = num+1; ;i++)
        {
            if(countones(num) == countones(i))
            {
                res = i;
                break;
            }
        }
        printf("Case %d: %lld\n", ++kaseno, res);
    }
    return 0;

}
