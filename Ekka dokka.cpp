#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T, i = 1;
    unsigned long long int m, n, w;
    cin >> T;
    while(T>0)
    {
        m = 2;
        cin >> w;
        int flag = 0;
        while((m<=w) && (w%2==0))
        {
            if(w%m == 0)
            {
                n = w/m;
                if(n % 2 == 1)
                {
                    flag = 1;
                    break;
                }
            }
                m+=2;
        }
        if(flag == 1)
        {
            printf("Case %d: %llu %llu\n",i, n, m);
        }
        else
            printf("Case %d: Impossible\n",i);
        T--;
        i++;
    }
    return 0;
}
