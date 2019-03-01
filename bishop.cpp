#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int T, i = 1;
    long long int r1, c1, r2, c2;
    cin >> T;
    while(T > 0)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        r1 = abs(r1-r2);
        c1 = abs(c1-c2);
        if(r1 == c1)
        {
            printf("Case %d: 1\n",i);
        }
        else if(c1%2 == r1%2)
        {
            printf("Case %d: 2\n",i);
        }
        else
            printf("Case %d: Impossible\n",i);
        T--;
        i++;
    }
}
