#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main()
{
    int l;
    unsigned long long int arr[22];
    arr[0] = 1;
    for(l = 1; l <= 20; l++)
    {
        arr[l] = arr[l-1]*l;
    }
    int T, i = 1;
    long long int n;
    cin >> T;
    while(T > 0)
    {
        stack<int>s;
        cin >> n;
        int k = 20;
        while(k >= 0)
        {
            if(arr[k]<=n)
            {
                n = n-arr[k];
                s.push(k);
            }
            k--;
        }
        if(n == 0) {
			printf("Case %d: ", i);
			while(s.size() != 1) {
				printf("%d!+", s.top());
				s.pop();

			}

			printf("%d!\n", s.top());
			s.pop();

		}

		else {
			printf("Case %d: impossible\n", i);
		}

    T--;
    i++;
    }
    return 0;
}
