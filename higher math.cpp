#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T, a, b, c, i = 1, f = 0;
    cin >> T;
    while(T > 0)
    {
        cin >> a >> b >> c;
        if((a*a) == (b*b) + (c*c))
            f = 1;
        else if((b * b) == (c*c) + (a * a))
            f = 1;
        else if((c*c) == (a*a) + (b*b))
            f = 1;
        if(f == 1)
        {
            printf("Case %d: yes\n",i);
        }
        else
            printf("Case %d: no\n",i);
        f = 0;
        i++;
        T--;
    }
}
