#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T, i = 1, ans, m, l;
    cin >> T;
    while(T > 0)
    {
        cin >> m >> l;
        if(m <= l)
        {
            ans = (4*l+10+9);
        }
        else
        {
            ans = ((m-l)*4+m*4+19);
        }
        printf("Case %d: %d\n", i, ans);
        T--;
        i++;
    }
    return 0;
}
