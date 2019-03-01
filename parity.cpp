#include <iostream>
#include <cstdio>

using namespace std;

int countones(int x)
{
    int s = 8*sizeof(x);
    int m = (1 << (s-1));
    int c = 0;
    for(int i = 0; i < s; i++)
    {
        if((x & m) != 0)
        {
            c++;
        }
        x = x << 1;
    }
    return c%2;
}

int main()
{
    int T, i = 1, n;
    cin >> T;
    while(T > 0)
    {
        cin >> n;
        int res = countones(n);
        if(res == 1)
            printf("Case %d: odd\n",i);
        else
            printf("Case %d: even\n",i);
        T--;
        i++;
    }
    return 0;
}
