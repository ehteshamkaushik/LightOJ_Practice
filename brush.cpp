#include <iostream>

using namespace std;

int main()
{
    int T, N, d, res, i;
    cin >> T;
    for(i = 0; i < T; i++)
    {
        res = 0;
        cin >> N;
        for(int j = 0; j < N; j++)
        {
            cin >> d;
            if(d > 0)
            {
                res+=d;
            }
        }
        cout << "Case " << i+1 << ": " << res << "\n";
    }

    return 0;
}
