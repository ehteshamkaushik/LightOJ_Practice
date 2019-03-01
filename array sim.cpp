#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T, m, n, i, j, a[101], k = 1;;
    char ch;
    cin >> T;
    while(T > 0)
    {
        cin >> n >> m;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while(m>0)
        {
            cin >> ch;
            switch(ch)
            {
            case 'S':
                cin >> j;
                for(i = 0; i < n; i++)
                {
                    a[i]+=j;
                }
                break;
            case 'M':
                cin >> j;
                for(i = 0; i < n; i++)
                {
                    a[i]*=j;
                }
                break;
            case 'D':
                cin >> j;
                for(i = 0; i < n; i++)
                    a[i] /= j;
                break;
            case 'R':
                for(i = 0, j = n-1; i < j; i++, j--)
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                break;
            case 'P':
                cin >> i >> j;
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                break;
            }
            m--;
        }
        printf("Case %d:\n",k);
        cout << a[0];
        for(i = 1; i < n; i++)
            cout << " " << a[i];
        cout << "\n";
        k++;
        T--;
    }
}
