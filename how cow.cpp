#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    int T, i = 1, x1, y1, x2, y2, x, y, n;
    cin >> T;
    while(T>0)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        printf("Case %d:\n",i);
        while(n>0)
        {
            cin >> x >> y;
            if((x > x1) && (x < x2) && (y > y1) && (y < y2))
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
                n--;
        }
        T--;
        i++;
    }
    return 0;
}
